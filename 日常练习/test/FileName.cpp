#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<windows.h>
#include<math.h>
#include <time.h>

//enum sex {
//	male,
//	female
//};
//int main() {
//	int i[10] = {1,2,3,4,5,6,7,8,9,10};
//	int b = 11;
//	int index = 0;
//	int start = 0;
//	int len = sizeof(i) / sizeof(int);
//	int end = len - 1;
//	
//	while (1) {
//		int half = (end + start) / 2;
//		if (i[half] > b) {
//			end = half - 1;
//			printf("end%d", half);
//		}
//		if (i[half] < b) {
//			printf("start%d", half);
//			start = half + 1;
//		}
//		if (i[half] == b) {
//			printf("half%d", half);
//			break;
//		}
//		if (start - end == 1) {
//			printf("no");
//			break;
//		}
//	}
//	return 0;
//	}
//
//int main() {
//	char* input = (char*)malloc(10 * sizeof(char));
//	//char input[10] = "";
//	scanf("%9s", &input);
//	Sleep(1000);
//	system("cls");
//	int len = strlen(input);
//	
//	char output[10] = "";
//	for (int i = 0; i < len; i++) {
//		output[i] = '#';
//	}
//	for (int i = 0; i < len; i++) {
//		for (int x = 0; x <= i; x++) {
//			output[x] = input[x];
//		}
//		printf("%s\n", output);
//		Sleep(1000);
//		system("cls");
//
//	}
	//free(input);


//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("please input your password:");
//		scanf("%s", password);
//		if (strcmp(password, "abcd") == 0) {
//			printf("login success");
//			break;
//		}
//	}
//}

//bool has_won(int input, int answer) {
//	if (input == answer) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main() {
//	int answer = rand() % 100 + 1;
//	printf("%d", answer);
//	
//	do {
//		int i = 0;
//		printf("please input a number:");
//		scanf("%d", &i);
//		if (has_won(i, answer)) {
//			printf("do u want to play again");
//			char x[] = "N";
//			scanf("%s", &x);
//			if (strcmp(x, "Y") == 0) {
//				answer = rand() % 100 + 1;
//			}
//			if (strcmp(x, "N") == 0) {
//				break;
//			}
//		}
//		else if (i < answer) {
//			printf("too small\n");
//		}
//		else {
//			printf("too large\n");
//		}
//	} while (1);
//	
//}
//void swap(int a, int b) {
//	int z = 0;
//	z = a;
//	a = b;
//	b = z;
//
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int z = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a, b);
//	//swap(a, b);
//	z = a;
//	a = b;
//	b = z;
//	printf("%d %d", a, b);
//
//}
//int main() {
//	int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	for (int i = 0; i < len/2; i++) {
//		int j = len - i - 1;
//		int x = 0;
//		x = arr[i];
//		arr[i] = arr[j];
//		arr[j] = x;
//	}
//	
//	for (int i = 0; i < len; i++) {
//		printf("%d", arr[i]);
//	}
//}


//void print(int n) {
//	if (n == 0) {
//		return;
//	}
//	int j = n % 10;
//	printf("%d", j);
//	j = n / 10;
//	print(j);
//}
//
//int main() {
//	print(1234);
//}

//int my_strlen(char* c) {
//	if (*c != '\0') {
//		c++;
//		return 1 + my_strlen(c);
//	}
//	
//
//}
//
//int main() {
//	int b = 0;
//	char d[] = "abc";
//	printf("%d", my_strlen(d));
//}


//int gcd(int a, int b) {
//	if (a % b == b) {
//		return -1;
//	}
//	
//	if (a % b == 0) {
//		return b;
//	}
//	else {
//		int c = a % b;
//		return gcd(b, c);
//	}
//
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int d = gcd(a, b);
//	printf("%d", d);
//}
//
//int main() {
//	int arr[10] = { 0 };
//	scanf("%d %d", &arr[2], &arr[3]);
//	printf("%d %d", arr[2], arr[3]);
//}

//int main() {
//	int arr[3][4] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	printf("%d", sz);
//}

//int print(char* n, int sz,char* b) {
//	b[sz - 1] =  n[0];
//	b[0] = n[sz - 1];
//	return sz;
//		
//	
//}
//int main() {
//	char b[] = "what";
//	char* c = (char*)malloc(strlen(b) * sizeof(char));
//	print(b, 4, c);
//
//	printf("%s", c);
//	free(c);
//
//	
// 
//}

//void swap(char a[], char b[],int sz) {
//	for (int i = 0; i < sz; i++) {
//		char tem = a[i];
//		a[i] = b[i];
//		b[i] = tem;
//	}
//}
//
//int main() {
//	int sz = 4;
//	char a[4] = "qqq";
//	char b[4] = "bbb";
//	*b = *a;
//	//swap(a, b,4);
//	printf("%s", b);
//}
//
//int main() {
//	char a = -1;
//	char b = 133;
//	printf("%d", b);
//}

//int step(int n) {
//	if (n <= 2) {
//		return n;
//	}
//	else {
//		return step(n - 1) + step(n - 2);
//	}
//}
//
//int main() {
//	int a = step(3);
//	printf("%d", a);
//}
//
//int main() {
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	while(scanf("%c %c %c",&a, &b, &c) != EOF) {
//		if (a >= 'a' && a <= 'z') {
//			printf("%c%c\n", a-32,c);
//		}
//		else {
//			printf("%c\n", a+32);
//		}
//		
//		getchar();
//	}
//}
//
//int sum(int a) {
//	int sz = 1;
//	int b = a;
//	while (b >= 10) {
//		b /= 10;
//		sz++;
//	}
//	int* h = (int*)malloc(sz * sizeof(int));
//	int x = 0;
//	for (int i = 0; i < sz; i++) {
//		if (i == 0) {
//			x = a % 10;
//		}
//		else {
//			x = (a / ((int)pow(10,i))) % 10;
//		}
//		h[i] = x;
//
//	}
//	int a_ = 0;
//	int b_ = 0;
//	int sum = 0;
//	for (int back = 0; back < sz; back++) {
//		//int front = sz - back;
//		a_ = 0;
//		b_ = 0;
//		for (int i = 0; i < sz; i++) {
//			if (i < back)
//				a_ += (h[i] * pow(10, i));
//			else
//				b_ += h[i] * pow(10, sz - i - 1);
//			
//		}
//		sum += (a_ * b_);
//		
//	}
//	return sum;
//}
//
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", sum(a));
//}

//int main() {
//	int a[10] = {0};
//	int* b = &(a[2]);
//	*b = 10;
//	printf("%d", a[2]);
//
//}

//struct stu {
//	char name[10];
//	char sex[10];
//
//};
//struct st {
//	struct stu stu;
//	char n[10];
//};
//
//int main() {
//	struct stu p1 = { "ss" };
//	struct st p2 = { p1,"ss" };
//
//}

//无符号数的算数转换
//
//int main() {
//	const int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//}


//最大公倍数
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int tmp_a = a;
//	int tmp_b = b;
//	int tmp = 0;
//	do {
//		tmp = tmp_a % tmp_b;
//		if (tmp != 0) {
//			tmp_a = tmp_b;
//			tmp_b = tmp;
//		}
//
//	} while (tmp);
//	printf("%d", a * b / tmp_b);
//}


////单词逆序
//int main() {
//	char a[20] = { 0 };
//	char b[20] = { 0 };
//	gets_s(a);
//	//printf("%s", a);
//	int num = 0;
//	for (int i = 0; i < strlen(a); i++) {
//		if (a[i] == ' ') {
//			num++;
//		}
//	}
//	int b_pos = 0;
//	//printf("%d", num);
//	for (int word = 0; word < num + 1; word++) {
//		int start = 0;
//		int pos = 0;
//		while (pos < (num - word)) {
//			if (a[start] == ' ') {
//				pos++;
//			}
//			start++;
//		}
//		while (a[start] != ' ' && a[start] != '\0') {
//			b[b_pos] = a[start];
//			b_pos++;
//			start++;
//
//		}
//		if (word == num) {
//			b[b_pos] = '\0';
//		}
//		else {
//			b[b_pos] = ' ';
//			b_pos++;
//		}
//
//	}
//	printf("%s", b);
//}

//截断和整型提升
//int main() {
//	char a = -100;
//	printf("%d", a);
//}

//快速排序

//void Quicksort(int a[], int sz,int left,int right) {
//	if (sz == 1 || sz == 0) {
//		return;
//	}
//	
//	int pivot = a[left];
//	int index = left;
//	for (int i = left + 1; i < right + 1; i++) {
//		if (a[index] > a[i]) {
//			if (i - index == 1) {
//				printf("ss");
//				int temp = pivot;
//				a[index] = a[i];
//				a[i] = temp;
//				index = index + 1;
//			}
//			else {
//				int temp = a[i];
//				for (int g = i; g > index; g--) {
//					a[g] = a[g - 1];
//				}
//				a[index] = temp;
//				index = index + 1;
//			}
//		}
//		
//		
//	
//	}
//	Quicksort(a, index - left, left, index - 1);
//	Quicksort(a, right - index, index + 1, right);
//
//
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//	int sz = 10;
//	int a[30] = {44, 90, 58, 27, 12, 98, 23, 85, 93, 26};
//	for (int i = 0; i < sz; i++) {
//		//a[i] = rand() % 100;
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	Quicksort(a, sz,0,sz-1);
//
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", a[i]);
//	}
//
//
//}
// ////多升序数组排序（未完成）
//int minimum(int a, int b, int c) {
//	int d = a;
//	if (d > b) {
//		d = b;
//	}
//	if (d > c) {
//		d = c;
//	}
//	return d;
//}

//void combine(int a[], int b[], int c[], int d[]) {
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	for (int i = 0; i < 15; i++) {
//		int h = minimum(a[x], b[y], c[z]);
//		if (h == a[x] && x < 4) {
//			x = x + 1;
//		} else if (h == b[y] && y < 4) {
//			y = y + 1;
//		} else  {
//			if (z < 4) {
//				z = z + 1;
//			}
//		}
//		d[i] = h;
//	}
//	
//
//}
//
//int main() {
//	int a[5] = { 0 };
//	int b[5] = { 0 };
//	int c[5] = { 0 };
//	int d[15] = { 0 };
//	//输入升序数组
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &b[i]);
//	}
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &c[i]);
//	}
//
//
//	//
//	combine(a, b, c, d);
//	for (int i = 0; i < 15; i++) {
//		printf("%d", d[i]);
//	}
//	
//}

//反转链表
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  *
  *
  * @param head ListNode类
  * @return ListNode类
  */
//struct ListNode* ReverseList(struct ListNode* head) {
//    // write code here
//    int sz = 0;
//    struct ListNode* prev = NULL;
//    struct ListNode* node = head;
//    struct ListNode* next = head->next;
//    while (node != NULL) {
//        node->next = prev;
//        prev = node;
//        node = next;
//        next = next->next;
//    }
//
//    return prev;
//}

//区间反转链表
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  *
  *
  * @param head ListNode类
  * @param m int整型
  * @param n int整型
  * @return ListNode类
  */
//struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
//    if (m == n) {
//        return head;
//    }
//    int a = 1;
//    struct ListNode* beforestart = NULL;
//    struct ListNode* start = head;
//    struct ListNode* node = head;
//
//    while (a < m) {
//        if (a == m - 1) {
//            beforestart = node;
//            node = node->next;
//            start = node;
//            a++;
//            break;
//        }
//        node = node->next;
//        a++;
//    }
//    struct ListNode* prev = node;
//    node = node->next;
//    struct ListNode* next = node->next;
//    while (a < n) {
//        node->next = prev;
//        if (a != n) {
//            prev = node;
//            node = next;
//            next = node->next;
//        }
//        a++;
//    }
//
//    if (beforestart != NULL) {
//        beforestart->next = prev;
//    }
//    //printf("%d",next->val);
//    start->next = node;
//    if (m == 1) {
//        return prev;
//    }
//    else {
//        return head;
//    }
//
//    // write code here
//}

//二分查找
//int search(int* nums, int numsLen, int target) {
//    int a = 0;
//    int len = numsLen;
//    int pointer = numsLen / 2;
//    while (len != 0) {
//        len = len / 2;
//        a = nums[pointer];
//        if (a == target) {
//            break;
//        }
//        else if (a > target) {
//            pointer = pointer - len / 2;
//            if (len / 2 == 0) {
//                pointer = pointer - 1;
//            }
//        }
//        else {
//            pointer = pointer + len / 2;
//            if (len / 2 == 0) {
//                pointer = pointer + 1;
//            }
//        }
//
//    }
//    if (nums[pointer] == target) {
//        return pointer;
//    }
//    else {
//        return -1;
//    }
//
//
//
//    // write code here
//}


//二分查找之找峰值
//int checkpeak(int a, int* nums, int sz) {
//    if (a == 0 && nums[a] > nums[a + 1]) {
//        return 1;
//    }
//    else if (a == sz - 1 && nums[a] > nums[a - 1]) {
//        return 1;
//    }
//    else if (nums[a] > nums[a - 1] && nums[a] > nums[a + 1]) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//int findPeakElement(int* nums, int numsLen) {
//    // write code here
//    if (checkpeak(0, nums, numsLen) == 1) {
//        return 0;
//    }
//    if (checkpeak(numsLen - 1, nums, numsLen) == 1) {
//        return numsLen - 1;
//    }
//    int mid = numsLen / 2;
//    int len = numsLen / 2;
//    while (checkpeak(mid, nums, numsLen) != 1) {
//        printf("%d\n", mid);
//        if (nums[mid - 1] > nums[mid]) {
//            len = len / 2 + len % 2;
//            mid = mid - len;
//            if (len == 0) {
//                mid--;
//                break;
//            }
//
//        }
//        else {
//            len = len / 2 + len % 2;
//            mid = mid + len;
//            if (len == 0) {
//                mid++;
//                break;
//            }
//
//        }
//    }
//    //if(numsLen == 200000) {
//   // printf("%d %d %d",nums[9994],nums[9995],nums[9996]);}
//    return mid;
//
//
//}

//二叉树前序
/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  *
  *
  * @param root TreeNode类
  * @return int整型一维数组
  * @return int* returnSize 返回数组行数
  */
//#include <limits.h>
//int* a;
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    int b = 0;
//    if (*returnSize == 0) {
//        a = (int*)malloc(100 * sizeof(int));
//        b = 1;
//        if (root == NULL) {
//            return a;
//        }
//        else {
//            a[0] = root->val;
//            (*returnSize)++;
//
//        }
//    }
//    if (root->left != NULL) {
//        a[*returnSize] = root->left->val;
//        (*returnSize)++;
//        preorderTraversal(root->left, returnSize);
//    }
//    if (root->right != NULL) {
//        a[*returnSize] = root->right->val;
//        (*returnSize)++;
//        preorderTraversal(root->right, returnSize);
//    }
//    if (b == 1) {
//        return a;
//    }
//    else {
//        return NULL;
//    }
//
//}

//二叉树中序
/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  *
  *
  * @param root TreeNode类
  * @return int整型一维数组
  * @return int* returnSize 返回数组行数
  */
//int* a;
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//
//    if (*returnSize == 0) {
//        a = (int*)malloc(1000 * sizeof(int));
//        if (root == NULL) {
//            return a;
//        }
//    }
//    if (root->left != NULL) {
//        inorderTraversal(root->left, returnSize);
//
//    }
//    a[*returnSize] = root->val;
//    (*returnSize)++;
//
//    if (root->right != NULL) {
//        inorderTraversal(root->right, returnSize);
//
//    }
//    return a;


    // write code here
//}
//双栈形成队列
//int arr[1000];
//int a = 0;
//int b = 0;
//typedef struct stack {
//    int(*array)[1000];
//    int* top;
//    int* botton;
//} stack;
//
//stack one = { &arr,&a,&b };
//stack two = { &arr,&b,&a };
//
//
//
//void push(int node) {
//    b = b % 1000;
//    arr[b] = node;
//    b++;
//
//}
//
///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param 无
// * @return int整型
// */
//int pop() {
//    a = a % 1000;
//    int c = a;
//    a++;
//    return arr[c];
//}


//栈最小
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param value int整型
 * @return 无
 */
//struct Stack {
//    int val;
//    struct Stack* next;
//    struct Stack* prev;
//};
//typedef struct Stack stack;
//
//stack* topp = NULL;
//int minn = 100000;
//
//void push(int value) {
//    if (value < minn) {
//        minn = value;
//    }
//    if (topp == NULL) {
//        topp = (stack*)malloc(sizeof(stack));
//        topp->prev = NULL;
//        topp->prev = NULL;
//        topp->val = value;
//
//    }
//    else {
//        stack* tmp;
//        tmp = (stack*)malloc(sizeof(stack));
//        tmp->prev = topp;
//        tmp->val = value;
//        topp->next = tmp;
//        topp = tmp;
//    }
//
//    // write code here
//
//}
//
///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param 无
// * @return 无
// */
//void pop() {
//    stack* tmp;
//    tmp = topp;
//    topp = topp->prev;
//    topp->next = NULL;
//    if (tmp->val == minn) {
//        minn = topp->val;
//        stack* a = tmp->prev;
//        while (a->prev != NULL) {
//            a = a->prev;
//            if (a->val < minn) {
//                minn = a->val;
//            }
//
//        }
//    }
//}
//
///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param 无
// * @return int整型
// */
//int top() {
//    return topp->val;
//    // write code here
//
//}
//
///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param 无
// * @return int整型
// */
//int min() {
//    return minn;
//    // write code here
//
//}

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param num int整型一维数组
 * @param numLen int num数组长度
 * @return int整型二维数组
 * @return int* returnSize 返回数组行数
 * @return int** returnColumnSizes 返回数组列数
 */
//没重复按字典顺序全排列
//#include <string.h>
//int count_size(int a) {
//    int size = 1;
//    while (a > 1) {
//        size *= a;
//        a--;
//    }
//    return a;
//}
//void order(int* b, int sz) {
//    for (int a = sz - 1; a > 0; a--) {
//        int c = a;
//        while (c > 0) {
//            int tmp = 0;
//            if (b[c] < b[c - 1]) {
//                int tmp = 0;
//                tmp = b[c];
//                b[c] = b[c - 1];
//                b[c - 1] = tmp;
//
//            }
//            c--;
//        }
//    }
//
//}
//#include <stdlib.h>
//int** permute(int* num, int numLen, int* returnSize, int** returnColumnSizes) {
//    int size = count_size(numLen);
//    int** a = (int**)malloc(size * sizeof(int*));
//    if (size == 1) {
//        int* col = (int*)malloc(numLen * sizeof(int));
//        memcpy(col, num, sizeof(int));
//        a[0] = col;
//        *returnSize = 1;
//        int* column = (int*)malloc(sizeof(int));
//        column[0] = 1;
//        returnColumnSizes[0] = col;
//        return a;
//    }
//    else {
//        for (int x = 0; x < numLen; x++) {
//            int* y = (int*)malloc((numLen - 1) * sizeof(int));
//            int z = 0;
//            while (z > )
//        }
//
//
//        return a;
//    }
}
// for(int b = 0; b < 2;b++) {
//     int* col = (int*) malloc(numLen * sizeof(int));
//     a[b] =col;

// }

// *returnSize = 2;
// for(int b = 0; b < 2;b++) {
//     int* col = (int*) malloc(2 * sizeof(int));
//     col[0] = 2;
//     col[1] = 2;
//     returnColumnSizes[b]= col ;


// write code here