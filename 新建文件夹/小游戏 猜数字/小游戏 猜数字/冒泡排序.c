//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 9; i++)//确定趟数
//	{
//		int flag = 1;//假设已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j +1])//该趟进行排序
//			{
//				int tmp = arr[j];
// 				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟未完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
// {
//	int i = 0;
//	int arr[] = { 9,8,7,6,4,5,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
