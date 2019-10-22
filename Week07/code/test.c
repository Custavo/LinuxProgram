#include <stdio.h>

int main(int argc, char *argv[])
{
	//printf("hello\n"); //test01行缓冲
	//setvbuf(stdout, NULL, _IONBF, 0); //test02无缓冲
	printf("hello");
	//fflush(stdout); //test03清理缓冲区
	//fclose(stdout); //test04清理缓冲区
	//test05填满缓冲区
	/*
	for (int i = 0; i < 1020; i++)
	{
		putchar('\0');
	}
	*/
	while(1);
}
