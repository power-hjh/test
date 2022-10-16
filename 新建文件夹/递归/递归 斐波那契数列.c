#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
/*int num(int x) 
	if (x <= 2)
		return 1;
	if (x > 2)
		return num(x - 1) + num(x - 2);
}*/
int num(int x)
{
	
	int y = 1;
	int z = 1;
	int sum = 1;
	
	while (x>2)
	{
		sum = z + y;
  		y = z;
		z = sum;
		x--;
	}
	return sum;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int b = num(a);
	printf("%d", b);

	return 0;
}