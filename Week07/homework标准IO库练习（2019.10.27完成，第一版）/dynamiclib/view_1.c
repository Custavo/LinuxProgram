#include "head.h"
int view_1(){
	system("clear");
	system("ls -l");
	printf("请输入任何值返回主界面:");
	char i = 0;
	scanf("%s", &i);
	getchar();
	menu_1();
	return 0;
}
