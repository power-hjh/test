#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;                     //EOF:end-of-file 文件结束标志
	while ((ch = getchar()) != EOF)//getchar获取字符  
		putchar(ch);               //putchar输出字符


	return 0;
}