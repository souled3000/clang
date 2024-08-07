/*
 * pragma.c
 *
 *  Created on: 2017年1月18日
 *      Author: juliana
 */
#pragma pack(1)
struct s_1 {
	char a;
	int b;
};
struct s_3 {
	char a;
	long long b;
};
typedef struct{
	char x;
	int * a;
	unsigned char y[10];
	unsigned char *yy[10];
}s_4;
#pragma pack()
struct s_2 {
	char a;
	int b;
};

void print_pragma() {
	struct s_1 s1;
	printf("S_1's length: %d\n", sizeof(s1));
	struct s_2 s2;
	printf("S_2's length: %d\n", sizeof(s2));
	printf("s_3's length:%d\n", sizeof(struct s_3));
	printf("s_4's length:%d\n", sizeof(s_4));
}

