/*
 * pointer.c
 *
 *  Created on: 2016��12��23��
 *      Author: Asteria
 */

void test_p_a() {
	int a[] = { 2 };
	printf("%d\n", *a);

	const int b[] = { 3 };
	printf("%d\n", *b);
	int * p;
	p = b;
	p[0] = 6;

	const int k = 10;
	int * kp = &k;
	*kp = 100;
	printf("b[0]:%d\n", b[0]); //��Ȼ��const��ֵ��ͨ��ָ��ı���
	printf("k:%d\n", k); //��Ȼ��const��ֵ��ͨ��ָ��ı���
}

void test_restrict() {
	int * restrict a = (int*) calloc(2, sizeof(int));
	a[0] += 10;
	printf("%d\n", a[0]);
	a[0] += 20;
	printf("%d\n", a[0]);
}

void array2pointer() {
	int a[] = { 3, 2, 1 };
	int *p;

//	int b[] = a;//no way

	p = a;
	printf("%d\n", *p);
	printf("%d\n", p[0]);
	printf("%d\n", &p);
	printf("%d\n", p);
	printf("%d\n", a);
	printf("\n");

	p = &a;
	printf("%d\n", *p);
	printf("p[0]:%d\n", p[0]);
	printf("*(p+1):%d\n", *(p + 1));
	printf("%d\n", &p);
	printf("%d\n", p);
	printf("%d\n", a);
}

void charary2charpointer() {
	char x[] = { "" };
	char y[] = { 's', 'd' };
	char a[] = "abcd";
	char *b = "abcd";
	char *c = a;
}

void c99_initialarray() {
	int a[] = { 1, 2, [50]=30, 7, 8 };
	printf("%d\n", sizeof(a));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d:%d\n", i, a[i]);
	}

	int c[] = { 1, 2, 3 };
	printf("%d\n", sizeof(c));

	int b[4] = { 1 };
	printf("%d\n", sizeof(b));

}

void arry_trap() {
	int a[] = { 1 };
//	a = {2};
//	int b[] = a;
	int * p = a;
//	int b[]=p;
}

void call_traverse() {
//	int a []={};
	int a[] = { 3, 4, 5, 6 };
	printf("%p\n", a);
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a) / sizeof(4));
	traverse(a);
}
void traverse(int a[static 100]) {
	//a��һ��intָ�룬sizeof(int)=8, 8/4=2
	//���Դ������飬����ͨ�����ַ�ʽ��ȡ�����С��ֻ���ٴ�һ�������С�Ĳ���
	printf("%p\n", a);
	printf("%d\n", sizeof(a) / sizeof(4));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d:%d\n", i, a[i]);
	}
}

void pointer_trap() {
	int * p;
	*p = 3;	//δ��ʼ��ָ�벻���������
	printf("%d\n", *p);
}

void const_pointer() {
	int b[] = { 4 };
	const int a[] = { 3 };
	int *p = b;
	p = a;
	printf("%d\n", *p);
	*p = *p + 100;
	printf("%d\n", *p);
}
void pointer_multidimensional() {

//	int a[���Կ�][������ֵ]={{11,12},{21,22,23},{31,32,33}};
	int a[][3] = { { 11, 12, 13 }, { 21, 22, 23 }, { 31, 32, 33 } };
	printf("%d\n", sizeof(a));
//	int (* p) [3][3] = a;
	int *p = a;

	printf("%p\n", p);
//	printf("%d\n", **p);
//	printf("%d\n", **(p + 2));
//	printf("%d\n", *(*(p + 2) + 2));
//	printf("%d\n", (p + 2)[0][0]);
//	printf("%d\n", p[0][0]);

	printf("%d\n", a[2][2]);
	printf("%d\n", *(*(a + 2) + 2));

	int (*pp)[3];	//����һ��
	pp = &a[0];
	printf("%p\n", a);
	printf("%p\n", pp);
	printf("%d\n", **pp);
	printf("%d\n", **(pp + 2));
	printf("%d\n", *(*(pp + 2) + 2));
	printf("%d\n", (pp + 2)[0][0]);
	printf("%d\n", pp[0][0]);
}

void vla(int,int,int ar[*][*]);
void vla(int rows,int cols,int a[rows][cols]){

}

void compound_literal(){
	int *p = (int []){1,3};
	printf("%d\n",p[1]);

	int (*pp)[2]=(int[][2]){{3,4},{1,2}};
	printf("%d\n",pp[0][0]);

}
