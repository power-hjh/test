#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;                     //EOF:end-of-file �ļ�������־
	while ((ch = getchar()) != EOF)//getchar��ȡ�ַ�  
		putchar(ch);               //putchar����ַ�


	return 0;
}