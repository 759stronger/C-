#define _CRT_SECURE_NO_ARNINGS 1
#define ROW 3
#define COL 3
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);
//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);
//�������
void Playermove(char board[ROW][COL], int row, int col);
//��������
void Computermove(char board[ROW][COL], int row, int col);
//�ж���Ϸ
char Checkwin(char board[ROW][COL], int row, int col);