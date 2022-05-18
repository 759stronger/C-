#include "game.h"  

void Initboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0;i < row;i++)
	{
		int j;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0;j < col;j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("你的回合\n");
	while (1)
	{
		printf("输入坐标");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("错误\n");
		}
		else
		{
			printf("坐标错误\n");
		}
	}

}

void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int Isfull(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0;i < row;i++)
	{
		int j;
		for (j = 0; j < col;j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char Checkwin(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (i = 0; i < col;i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	if ( board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
	if (Isfull(board, row, col) == 1)
		return 'q';
	return 'c';
}