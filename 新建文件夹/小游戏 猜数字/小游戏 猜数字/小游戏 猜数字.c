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
//	printf("�������\n");
//	 ret = rand()%100+1;
//	//RAND����������� 0-32767
//	 while (1)
//	 {
//		 scanf("%d", &guess);
//		 sum++;
//		 if (guess == ret)
//		 {
//			 printf("��ϲ�㣬�¶���\n");
//			 break;
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("��С��\n");
//			  
//		 }
//		 else if(guess > ret)
//		 {
//			 printf("�´���\n");
//			 
//		 }
//	 }
//	 printf("�ۼƲ�%d��\n", sum);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʹ��randǰҪ�ȵ���srand(),�������Ǳ���
//	//ʱ�����timeʹ��ϵͳ��ʱ�����ɱ���
//	//1��()ǿ������ת��   2��()���ú���ʱ�õģ��˲���Ϊָ��
//	
//	do
//	{
//		printf("*******************************\n");
//		printf("******1����ʼ     0������******\n");
//		printf("*******************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");	
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input); 
//	return 0;
//}
