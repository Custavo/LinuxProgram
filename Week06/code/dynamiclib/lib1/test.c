#include "lib.h"
int main()
{
	int b[100];
	int a[10]={324,8,-9,5,0,3454,234,-987,100000,12};
	printf("max=%d\n",max(a,10));
	printf("sum=%d\n",sum(a,10));
	urand(b,100);
	show(b,100);
	return 0;
}
