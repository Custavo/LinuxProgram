#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>  
int a;
static int b = 10;
int main(int argc, char* argv[], char* envp[])
{
	int a = 10;//stack
	char* p = (char*)malloc(sizeof(char));//heap
	printf("a = %d, p = 0x%x\n", a, (unsigned int)(long)p);//动态链接库，*.so
	getchar();//设置阻塞，也可以使用sleep()函数解决
	getchar();
	return 0;
}
