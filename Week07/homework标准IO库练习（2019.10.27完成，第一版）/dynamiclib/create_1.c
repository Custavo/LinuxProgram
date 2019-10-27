#include "head.h"
int create_1(void)
{
	FILE *fp;
	char s[100] = "test.txt";
	char* s1 = s;
	system("clear");
	printf("请输入文件名 :");
	scanf("%s", &s[0]);
	if ((fp = fopen(s1, "w")) == NULL);
	{
		printf("文件创建成功\n");
	}
	printf("请输入任何值返回主界面:");
	scanf("%s", &s[0]);
	getchar();
	menu_1();
	return 0;
}
