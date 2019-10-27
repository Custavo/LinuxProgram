#include "head.h"
void menu_1()
{
	char i = 0;
	system("clear");
	printf("+--------------------------------------+\n");
	printf("|            标准IO库练习              |\n");
	printf("+---+----------------------------------+\n");
	printf("| 0 | 退出                             |\n");
	printf("| 1 | 创建新文件                       |\n");
	printf("| 2 | 写文件                           |\n");
	printf("| 3 | 读文件                           |\n");
	printf("| 4 | 查看所有文件权限                 |\n");
	printf("| 5 | 查看当前文件的权限修改文件权限   |\n");
	printf("| 6 | 帮助                             |\n");
	printf("+---+----------------------------------+\n");
	printf("请输入你的选择：");
	i = getchar();
	switch (i)
	{
		case '0':exit_1();       			break;
		case '1':create_1();   			    break;
		case '2':write_1(); 				break;
		case '3':read_1(); 					break;
		case '4':view_1();			 		break;
		case '5':view_modify_1();			break;
		case '6':help_1();			 		break;
		default:printf("error\n"); 			break;
	}
}
