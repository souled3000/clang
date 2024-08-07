/*
 * bitfield.c
 *
 *  Created on: 2016年12月30日
 *      Author: juliana
 */

struct {
	unsigned int a:32;
	unsigned int b:32;
	unsigned int c:32;
	unsigned int d:32;
	unsigned long long e:64;
}A;

void bitfield_1(){
	A.a=1;
	A.b=1;
	A.c=1;
	A.d=1;
	A.e=1;
	printf("begin\n");
	printf("A.a=%d\n",A.a);
	printf("sizeof(A):%d\n",sizeof(A));
	printf("A:%x\n",A);
	int/*ssss*/a;
}

typedef struct {
	union {
		struct {
			unsigned char b1 :1;
			unsigned char b2 :1;
			unsigned char b3 :5;
			unsigned char b4 :1;
		};
		unsigned char eight;
	};
} SA;
void sa_f() {
	SA sa;
	sa.b1 = 1;
	sa.b2 = 1;
	sa.b3 = 0;
	sa.b4 = 1;
	printf("%x\n", sa.eight);
}
