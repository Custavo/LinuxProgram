#include<stdio.h>
int main(int argc, char *argv[], char *env[])
{
	int i = 0;
	for(; env[i]; i++)
	{
		printf("%s\n", env[i]);
	}
	
	printf("-----------------\n");


	extern char **environ;

	for(; environ[i];i++)

	{

		printf("%s\n",environ[i]);

	}



	printf("-----------------\n");


	printf("%s\n",getenv("PATH"));
	return 0;
}

