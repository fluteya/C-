#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>

char** init(int sz);


int** cordinate(int num,int range){
	srand((unsigned int) time(NULL));
	int** a =(int**) malloc(sizeof(int*) * num);
	for (int i = 0; i < num; i++) {
		a[i] = (int*)malloc(sizeof(int) * 2);
	}
	int i = 0;
	LOOP:while (i < num) {
		int c = rand() % range;
		int d = rand() % range;
		for (int x = 0; x < num; x++) {
		
			if (a[x][0] == c && a[x][1] == d) {
				goto LOOP;
			}
		}
		a[i][0] = c;
		a[i][1] = d;
		i++;
	}
	return a;
}

char** make_bomb(int** b, int range,int bomb_num) {
	char** a = init(range);

	for (int i = 0; i < bomb_num; i++) {
		int row = b[i][0];
		int column = b[i][1];
		a[row][column] = 'b';
	}

	return a;
}

char** init(int sz) {
	char** b = (char**)malloc(sizeof(char*) * sz);
	for (int i = 0; i < sz; i++) {
		b[i] = (char*)malloc(sizeof(char) * sz);
		for (int j = 0; j < sz; j++) {
			b[i][j] = '*';
		}
	}
	printf("%p\n", &b);
	return b;
}


void draw(char** a, int sz) {
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < sz;j++) {
			printf("%c", a[i][j]);
		}
		printf("%s", "\n");
	}
}

char** ans(char** a, int sz) {
	char** b = (char**)malloc(sizeof(char*) * sz);
	for (int i = 0; i < sz; i++) {
		b[i] = (char*)malloc(sizeof(char) * sz);
	}
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < sz; j++) {
			if (a[i][j] != 'b') {
				int num = 0;
				int top = i + 1 < sz ? i + 1 : -1;
				int bot = i - 1 >= 0 ? i - 1 : -1;
				int left = j - 1 >= 0 ? j - 1 : -1;
				int right = j + 1 < sz ? j + 1 : -1;
				int margin[8][2] = { {top, left},{top, j}, {top, right},{i, left},{i, right},{bot, left}, {bot, j}, {bot ,right} };
				for (int k = 0; k < 8; k++) {
					int x = margin[k][0];
					int y = margin[k][1];
					if (x == -1 || y == -1) {
						continue;
					}
					if (a[x][y] == 'b') {
						num++;
					}
				}
				b[i][j] = num + '0';
			}
			else {
				b[i][j] = a[i][j];
			}


		}
	}
	
	return b;
}

int in_bound(int num, int sz) {
	if (num < 0 || num >= sz) {
		return 0;
	}
	else {
		return 1;
	}
}
int scan(char** init, char** ans, int a, int b, int sz) {
	char x = ans[a][b];
	if (x != '0') {
		init[a][b] = ans[a][b];
		return 0;
	}
	else {
		int top = a + 1 < sz ? a + 1 : -1;
		int bot = a - 1 >= 0 ? a - 1 : -1;
		int left = b - 1 >= 0 ? b - 1 : -1;
		int right = b + 1 < sz ? b + 1 : -1;
		int margin[9][2] = { {top, left},{top, b}, {top, right},{a, left},{a, right},{bot, left}, {bot, b}, {bot ,right},{a,b}};
		for (int k = 0; k < 9; k++) {
			int z = margin[k][0];
			int y = margin[k][1];
			if (z == -1 || y == -1) {
				continue;
			}
			else {
				ans[a][b] = '#';
				scan(init, ans, z, y, sz);
				
			}
		}
	}

}
int game(char** init, char** bombs, char** ans, int sz) {
	//draw(init, sz);
	while (1) {
		draw(ans, sz);
		int a = 0;
		int b = 0;
		printf("%s", "please choose your cordinate:");
		scanf("%d %d", &a,&b);
		if (ans[a][b] == 'b') {
			draw(bombs,sz);
		}
		else if (ans[a][b] == '0') {
			scan(init, ans, a, b, sz);
			draw(init,sz);

		}
		else {
			init[a][b] = ans[a][b];
			draw(init, sz);
		}
		
	}

}


int main() {
	char** a = init(10);
	
	
	int** bomb_cordinate = cordinate(10, 10);
	char** b = make_bomb(bomb_cordinate, 10, 10);
	
	char** c = ans(b, 10);
	game(a, b, c, 10);
	for (int i = 0; i < 10; i++) {
		//printf("%d %d\n", a[i][0], a[i][1]);
		free(a[i]);
		free(b[i]);
		free(c[i]);
	}
	free(a);
	free(b);
	free(c);
	
}