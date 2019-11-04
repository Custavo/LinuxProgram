#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int ret;
	printf("caller1:pid = %d, ppid = %d\n",getpid(),getppid());
	ret = system("/home/rlk/Linux_Work/Week09/test2");
	printf("after calling\n");
	sleep(100);
	return 0;
}
