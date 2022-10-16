#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"
void game()
{
	srand((unsigned int) time(NULL));
	//存放棋盘信息
	char board[ROW][COL] = { 0 };
	//棋盘初始化
	intboard(board, ROW, COL);
	//打印棋盘
	displayboard(board,ROW,COL);
	//下棋
	char sign;
	while (1)
	{
		//玩家走
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断输赢
		sign=win(board,ROW,COL);//C:继续 *：玩家赢 #：电脑赢  Q：平局
		if (sign != 'C')
		{
			break;
		}
		//电脑走
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
		printf("玩家赢\n");
	}
	else if (sign == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
int main()
{
	int i = 0;
	do
	{
	printf("1.开始游戏 0.退出游戏\n");
	scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (i);
	return 0;
}
