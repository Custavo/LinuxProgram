#include "head.h"

int read_1(void) {
	char s[] = "test.txt";
	char* s1 = s;
	system("clear");
	printf("请输入文件名 :");
	scanf("%s", &s[0]);
    int fd = open(s, O_RDONLY);
    if(fd == -1) {
            printf("error is %s\n", strerror(errno));
            return 0;
    }
    char buf[100];
    memset(buf, 0, sizeof(buf));
    while(read(fd, buf, sizeof(buf) - 1) > 0) {
            printf("%s\n", buf);
    }
    close(fd);
	printf("请输入任何值返回主界面:");
	scanf("%s", &s[0]);
	getchar();
	menu_1();
	return 0;
}
