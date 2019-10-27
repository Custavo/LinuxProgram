#include "head.h"
int write_1(void)
{
	FILE *fp;
	char s0[100] = "test.txt";
	char* s1 = s0;
	char s2[100] = "#空文件";
	char* s3 = s2;
	system("clear");
	printf("请输入要写入的文件名:");
	scanf("%s", &s0[0]);
	if ((fp = fopen(s1, "w")) == NULL);
	{
		printf("文件开始写入\n");
	}
	printf("请输入:\n");
	scanf("%s", &s2[0]);
	fp = fopen(s1, "w");
	fprintf(fp, "%s ", s2);
	fclose(fp);
	printf("写文件完毕结果请看文件\n");
	printf("请输入任何值返回主界面:");
	scanf("%s", &s0[0]);
	getchar();
	menu_1();
	return 0;
}
