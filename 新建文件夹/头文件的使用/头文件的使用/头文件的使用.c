#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include  "add.h"
int main()
{
	int a = 7;
	int b = 9;
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}
