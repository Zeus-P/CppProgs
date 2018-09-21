#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   int n =6;
	/* A list of possible environment variables*/
	const char *env_var[n] = {"PUBLIC","HOME","SESSIONNAME","LIB","SystemDrive","PATH"};
	char *env_val[n];

	for(int i=0; i<n; i++)
	{
		/* Getting environment value if exists */
		env_val[i] = getenv(env_var[i]);
		if (env_val[i] != NULL)
			cout << "Variable = " << env_var[i] << ", Value= " << env_val[i] << endl;
		else
			cout << env_var[i] << " doesn't exist" << endl;
	}
}
