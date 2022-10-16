#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 10;
	int num2 = 66;
	int sum = 0;
	int numa = 7;
	int numb = 8;
	sum = Add(num1, num2);
	
	sum = Add(numa, numb);
	printf("sum = %d\nsum = %d\n", sum ,sum);
	return 0;
}