#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"
void game()
{
	srand((unsigned int) time(NULL));
	//���������Ϣ
	char board[ROW][COL] = { 0 };
	//���̳�ʼ��
	intboard(board, ROW, COL);
	//��ӡ����
	displayboard(board,ROW,COL);
	//����
	char sign;
	while (1)
	{
		//�����
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�ж���Ӯ
		sign=win(board,ROW,COL);//C:���� *�����Ӯ #������Ӯ  Q��ƽ��
		if (sign != 'C')
		{
			break;
		}
		//������
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		 sign =win(board,ROW,COL);
		 if (sign != 'C')
		 {
			 break;
		 }
	}
	if (sign == '*')
	{
		printf("���Ӯ\n");
	}
	else if (sign == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int i = 0;
	do
	{
	printf("1.��ʼ��Ϸ 0.�˳���Ϸ\n");
	scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (i);
	return 0;
}
