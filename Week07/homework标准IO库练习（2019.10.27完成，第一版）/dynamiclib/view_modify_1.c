#include "head.h"
int view_modify_1(){

	char s[100] = "ReadMe.txt";
	char* s1 = s;
	int i_u;//所有者权限
    int i_g;//所属组权限
    int i_o;//其他人权限

	system("clear");
	printf("请输入文件名 :");
	scanf("%s", &s[0]);
	char str[80];
    strcpy (str,"ls ");
    strcat (str,"-l ");
    strcat (str,s);
	system(str);
	printf("请输入修改后的权限数值（eg：777）：");
	int i = 777;
	scanf("%d",&i);
	if(i>777||i<0){
        printf("Error mode!\n"); 
        printf("请输入任何值返回主界面:");
		scanf("%s", &s[0]);
		getchar();
		menu_1();
		return 0;
    }
	i_u=i/100; 
    i_g=i/10%10;
    i_o=i%10;
    i=i_u*8*8+i_g*8+i_o;
    if(chmod(s1,i) == -1){
        perror("Error!\n");
        exit(1);
    }
 	printf("请输入任何值返回主界面:");
	scanf("%s", &s[0]);
	getchar();
	menu_1();
	return 0;
    return 0;
}
