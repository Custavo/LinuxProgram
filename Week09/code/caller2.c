#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int ret;
	printf("caller2:pid = %d, ppid = %d\n",getpid(),getppid());
	execl("/home/rlk/Linux_Work/Week09/test2","./test2","123","456",NULL);
	//execlp("/home/rlk/Linux_Work/Week09/test2","./test2","123","456",NULL);
	//execlv("/home/rlk/Linux_Work/Week09/test2","./test2","123","456",NULL);
	//execle("/home/rlk/Linux_Work/Week09/test2","./test2","123","456",NULL);
	printf("after calling\n");
	sleep(1);
	return 0;
}
