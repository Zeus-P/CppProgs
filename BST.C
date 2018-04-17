#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct BST
{
int info;
struct BST *left,*right;
};
typedef struct BST node;

node *insert(node*,int);
void search(node *,int);
int del(node*,int);
void display(node*);

void main()
{
node *root = NULL;
int element,choice,num,flag;

clrscr();

while(1)
{
clrscr();
printf("Select an Option\n");
printf("\n1-Insert");
printf("\n2-Search");
printf("\n3-Delete");
printf("\n4-Display");
printf("\n5-Exit");

printf("\n\nEnter Your Choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n\nEnter the Node Value : ");
scanf("%d",&element);
root=insert(root,element);
getch();
break;
case 2:printf("Enter The Element To be Searched : ");
scanf("%d",&num);
search(root,num);
getch();
break;
case 3 : printf("Enter The Element to be deleted : ");
scanf("%d",&num);
flag=del(root,num);
if(flag==1)
printf("\nElement %d Deleted from the List",num);
else
printf("\nElement %d is Not Present in List",num);
getch();
break;
case 4: display(root);
getch();
break;
case 5:exit(1);
break;
default : printf("\nIncorrect Choice...Please Try again. ");
getch();
break;
 }
}
}
void display(node *r)
{
if(r->left!=NULL)
display(r->left);
printf("%d\n",r->info);
if(r->right!=NULL)
display(r->right);
}

node *insert(node *r,int n)
{
if(r==NULL)
{
r=(node*)malloc(sizeof(node));
r->left=r->right=NULL;
r->info=n;
}
else if(n<r->info)
r->left=insert(r->left,n);
else if(n>r->info)
r->right=insert(r->right,n);
else if(n==r->info)
printf("\nInsert Operation Failed : Duplicate Entry !!");
return(r);
}
void search(node *r,int n)
{
if(r==NULL)
{
printf("\n%d is not Present in tree !!",n);
return;
}
else if(n==r->info)
printf("\nElement %d is Present in tree !!",n);
else if(n<r->info)
search(r->left,n);
else
search(r->right,n);
}

int del(node *r,int n)
{
node *ptr;
if(r==NULL)
return(0);
else if(n<r->info)
return(del(r->left,n));
else if(n>r->info)
return(del(r->right,n));
else {
if(r->left==NULL){
ptr=r;
r=r->right;
free(ptr);
return(1);
}
else if(r->right==NULL)
{
ptr=r;
r=r->left;
free(ptr);
return(1);
}
else
{
ptr=r->left;
while(ptr->right!=NULL)
ptr=ptr->right;
r->info=ptr->info;
return(del(r->left,ptr->info));
}
}
}