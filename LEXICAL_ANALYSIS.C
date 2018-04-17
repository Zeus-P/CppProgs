//C program for Lexical Analysis.
//This program takes input from data.txt and prints output in out.txt.
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp, *fw;
	char ch, A[20];
	char K[32][10]={"auto","break","case","char","const","continue",
			"default","do","double","else","enum","extern",
			"float","for","goto","if","int","long","register",
			"return","short","signed","sizeof","static","struct",
		      "switch","typedef","union","unsigned","void","volatile",
			"while"};
	int choice, num, flag, i, j, notread;

	fp=fopen("data.txt","r");
	fw=fopen("out.txt","w");

	notread=0;
	while(1)
	{
		if(notread==0)
			ch=fgetc(fp);
		if(ch==EOF)
			break;
		choice=0;
		if(ch>='0' && ch<='9')
			choice=1;
		else if((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z')||ch=='_')
			choice=2;
		else if(ch=='<'||ch=='>'||ch=='='||ch=='!')
			choice=3;
		else if(ch=='"')
			choice=4;
		else if(ch=='+'||ch=='-'||ch=='*'||ch=='%'||ch=='/')
			choice=5;
		else if(ch=='&'||ch=='|')
			choice=6;
		else if(ch=='('||ch==')'||ch==';'||ch=='{'||ch=='}'||ch==',')
		{
			fprintf(fw,"\n%c is punctuation mark ",ch);
			ch=fgetc(fp);
			notread=1;
			if(ch=='\n'||ch==' '||ch=='\t')
				notread=0;
		}

		switch(choice)
		{
			case 1: flag=0;
				num=0;
				while(ch>='0' && ch<='9')
				{
					flag=1;
					num=num*10+ch-48;
					ch=fgetc(fp);
				}
				if(flag==1)
					fprintf(fw,"\n%d is number ",num);
				if(ch==' '||ch=='\n'||ch=='\t')
					notread=0;
				else notread=1;
				break;
			case 2: i=0;
				A[i]='\0';
				while((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z')|| (ch>='0' && ch<='9')|| ch=='_')
				{
					A[i]=ch;
					i++;
					ch=fgetc(fp);
				}
				A[i]='\0';
				for(j=0;j<32;j++)
				{
					if(strcmp(A,K[j])==0)
					{
						fprintf(fw,"\n%s is keyword",A);
						break;
					}
				}
				if(j==32)
					fprintf(fw,"\n %s is identifier ",A);
				if(ch==' '||ch=='\n'||ch=='\t')
					notread=0;
				else notread=1;
				break;
			case 3: if(ch=='>')
				{
					ch=fgetc(fp);
					if(ch=='=')
						fprintf(fw,"\n>= is GE");
					else
						fprintf(fw,"\n> is GT");
				}
				else if(ch=='<')
				{
					ch=fgetc(fp);
					if(ch=='=')
					       fprintf(fw,"\n<= is LE");
					else
						fprintf(fw,"\n< is LT");
				}
				else if(ch=='!')
				{
					ch=fgetc(fp);
					if(ch=='=')
						fprintf(fw,"\n!= is NE");
					else fprintf(fw,"\n! is Logical NOT");
				}
				else if(ch=='=')
				{
					ch=fgetc(fp);
					if(ch=='=')
						fprintf(fw,"\n== is ET");
					else
						fprintf(fw,"\n= is assignment op");
				}
				if(ch==' '||ch=='\n'||ch=='\t')
					notread=0;
				else notread=1;
				break;
			case 4: fprintf(fw,"\n%c is punctuation mark",ch);
				ch=fgetc(fp);
				i=0;
				printf("%c",ch);
				while(ch!='"')
				{
					A[i]=ch;
					i++;
					ch=fgetc(fp);
				}
				A[i]='\0';
				fprintf(fw,"\n%s is string",A);
				fprintf(fw,"\n%c is punctuation mark",ch);
				ch=fgetc(fp);
				if(ch==' '||ch=='\n'||ch=='\t')
					notread=0;
				else notread=1;
			case 5: if(ch=='+')
				{
					ch=fgetc(fp);
					if(ch=='+')
						fprintf(fw,"\n++ is Increment Operator");
					else	fprintf(fw,"\n+ is addition");
				}
				else if(ch=='-')
				{
					ch=fgetc(fp);
					if(ch=='-')
						fprintf(fw,"\n-- is Decrement Operator");
					else fprintf(fw,"\n- is subtraction");
				}
				else if(ch=='*')
				{
					fprintf(fw,"\n* is Multiplication");
					ch=fgetc(fp);
				}
				else if(ch=='/')
				{
					fprintf(fw,"\n/is Division");
					ch=fgetc(fp);
				}
				if(ch==' '||ch=='\n'||ch=='\t')
					notread=0;
				else notread=1;
			case 6: if(ch=='&')
				{
					ch=fgetc(fp);
					if(ch=='&')
						fprintf(fw,"\n && is Logical AND");
					else fprintf(fw,"\n & is Address Operator or Bitwise AND");
				}
				else if(ch=='|')
				{
					ch=fgetc(fp);
					if(ch=='|')
						fprintf(fw,"\n || is Logical OR");
					else fprintf(fw,"\n | is Bitwise OR");
				}
				if(ch==' '||ch=='\n'||ch=='\t')
					notread=0;
				else notread=1;
		}
	}
	fclose(fp);
	fclose(fw);
	return 0;
}

