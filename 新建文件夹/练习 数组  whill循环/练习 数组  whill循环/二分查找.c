//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char arr[16] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	int k = 0;
//	scanf("%d", &k);
//	int light = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	
//	while (light <= right)
//	{
//		int mid = (right + light) / 2;
//		if (arr[mid] < k)
//		{
//			light = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] = k)
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//		
//	}
//	if (light > right)
//	{
//		printf("我TM妈没有") ;
//	}
//	return 0;
//}