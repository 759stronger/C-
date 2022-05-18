#define _CRT_SECURE_NO_ARNINGS 1
#define ROW 3
#define COL 3
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);
//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);
//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);
//判断游戏
char Checkwin(char board[ROW][COL], int row, int col);