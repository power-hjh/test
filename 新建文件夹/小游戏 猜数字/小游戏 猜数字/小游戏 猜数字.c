//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	int ret = 0; 
//	int guess = 0;
//	int sum = 0;
//	printf("请猜数字\n");
//	 ret = rand()%100+1;
//	//RAND：生成随机数 0-32767
//	 while (1)
//	 {
//		 scanf("%d", &guess);
//		 sum++;
//		 if (guess == ret)
//		 {
//			 printf("恭喜你，猜对了\n");
//			 break;
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("猜小了\n");
//			  
//		 }
//		 else if(guess > ret)
//		 {
//			 printf("猜大了\n");
//			 
//		 }
//	 }
//	 printf("累计猜%d次\n", sum);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//使用rand前要先调用srand(),括号内是变量
//	//时间戳：time使用系统的时间生成变量
//	//1、()强制类型转换   2、()调用函数时用的，此参数为指针
//	
//	do
//	{
//		printf("*******************************\n");
//		printf("******1、开始     0、结束******\n");
//		printf("*******************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");	
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input); 
//	return 0;
//}
