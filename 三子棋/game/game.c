#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "game.h"


void draw(char arr[][3]) {
	for (int i = 0; i < 3; i++) {
		char* line = row(arr[i]);
		printf("%s\n", line);
		if (i != 2) {
			printf("%s\n", max);
		}
		
	}


}

char* row(char arr[]) {
	static char row[] = "   |   |   ";
	row[1] = arr[0];
	row[5] = arr[1];
	row[9] = arr[2];
	return row;
}



void game() {
	char game[3][3] = { "   ","   ", "   " };
	do {
		printf("%s", "请输入坐标:>");
		int a = 0;
		int b = 0;
		scanf("%d %d", &a, &b);
		if (a > 2 || b > 2) {
			printf("%s", "错误坐标\n");
			continue;
		}
		if (game[a][b] != ' ') {
			printf("%s", "该坐标已被填写\n");
			continue;
		}
		game[a][b] = '#';
		draw(game);
	} while (1);
}

int check_win(char arr[][3]) {
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;


}

