#ifndef _GAME_H_
#define _GAME_H_
#include<stdio.h>      //include,����define
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<time.h>

#pragma warning(disable:4996)

void Login();
#define Name "tom"         //�ַ������ǵü�""
#define PassWord "1234"

void Menu();

void Game();
#define ROW 3        //row ����
#define COL 3        //column ����
#define P_COLOR 'X'
#define C_COLOR '0'
#define NEXT 'N'
#define DRAW 'D'

#endif