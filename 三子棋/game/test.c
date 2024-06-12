#define  _CRT_SECURE_NO_WARNINGS 
#include "game.h"
#include <stdio.h>


void menu() {
	printf("%s", "*******************\n");
	printf("%s", "***1-play 0-exit***\n");
	printf("%s", "*******************\n");
}
int main() {
	int input = 0;
	//char game[3][3] = { " # ","   ", "   "};
	do {
		menu();
		printf("%s", "ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch (input) {

		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("%s", "Ñ¡Ôñ´íÎó\n");
			break;
		}
	
	} while (input);

}