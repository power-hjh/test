#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int i = 0;
	int x = 0;
	for (i = 100; i <= 200; i++)
	{
		x = 2;
		while (1 < x && x < i)
		{
			if (i % x == 0)
				break;
		}
		if (x = i)
		{
			printf("%d", i);
		}

		
	}
	return 0;
}