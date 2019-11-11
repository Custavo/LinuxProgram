#include "my.h"
static void fun1(void)
{
	printf("invoked callbackfun!\n");
}
int main()
{
	atexit(fun1);
	printf("hello   ");
	exit(0);
	//_exit(0);
}
