#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
void urand(int *a, int n)
{
	int i, j;

	srand((int)time(0));
	for(i = 0; i < n; i++)
	{
		a[i] = 1 + (int)(100.0 * rand() / (RAND_MAX+1.0));
	}

	return;
}

void show(int* arr, int len)
{
	int i;

	for(i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	return;
}

