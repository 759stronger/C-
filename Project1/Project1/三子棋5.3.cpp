#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "game.h"  

void menu()
{
	printf("1.开始 2.退出");
             
}
 void game()
{
	 char ret = 0;
	 char board[ROW][COL];
	 Initboard(board, ROW, COL);
	 Displayboard(board, ROW, COL);
	 while (1)
	 {
		 Playermove(board, ROW, COL);
		 Displayboard(board, ROW, COL);
		 ret = Checkwin(board, ROW, COL);
		 if (ret != 'c')
			 break;
		 Computermove(board, ROW, COL);
		 Displayboard(board, ROW, COL);
			 if (ret != 'c')
				 break;
	 }
	 if (ret == '*')
		 printf(" you win \n");
	 else if (ret == '#')
		 printf(" you lose \n");
	 else if(ret == 'q')
		 printf(" 和棋 \n");
	 
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出");
			break;
		default:
			printf("错误");
			break;
		}
	} while (input);
	return 0;
}