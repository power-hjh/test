#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int arr[] = { 0,1,2,3,4,5 };
	printf("%p %p %p", &arr,&arr[0],&arr[1]);
	return 0;

}
