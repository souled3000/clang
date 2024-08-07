/*
 * misc.c
 *
 *  Created on: 2016年12月22日
 *      Author: juliana
 */



void func_prototype_1(int m, int n, int ar[n][m]);

void func_prototype_1(int x, int y, int xy[x][y]) {

}

void test_lchj(void) {
	int lchj = 5;
//	printf("%d\n",::lchj);
	printf("%d\n", lchj);
}

void test_local_static_variable(void) {
	static int si = 0;
	si++;
	printf("static local variable si:%d\n", si);
}
static int gsi = 0;
void test_global_static_variable(void) {
	gsi = 0;
	gsi++;
	printf("static global variable gsi:%d\n", gsi);
}

void test_global_static_variable2(void){
	static int gsi2;
//	extern int gsi2;
	gsi2++;
	printf("static global variable gsi2:%d\n",gsi2);
}
static int gsi2= 0;
//extern int gsi2= 0;

void test_register(void){
	register unsigned long long int a;
}
void test_sizeof(void) {
	char* s1 = "1";
	char s2[] = "1";
	char c1[] = "abc";
	char c2[] = "a\n";
	printf("%u\n", sizeof(s1));
	printf("%d\n", sizeof(s2));
	printf("%d\n", sizeof(c1));
	printf("%d\n", sizeof(c2));
	printf("\n");
	printf("%d\n", sizeof c2);
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(unsigned long long int));
	printf("%d\n", sizeof(long long unsigned int));
	printf("%d\n", sizeof(long long signed int));
	printf("%d\n", sizeof(long double));
	printf("\n");

	printf("char:%d\n", sizeof(char));
	printf("short:%d\n", sizeof(short));
	printf("short int:%d\n", sizeof(short int));
	printf("signed short int:%d\n", sizeof(signed short int));
	printf("unsigned short:%d\n", sizeof(unsigned short));
	printf("unsigned short int:%d\n", sizeof(unsigned short int));

	printf("int:%d\n", sizeof(int));
	printf("signed int:%d\n", sizeof(signed int));
	printf("unsigned int:%d\n", sizeof(unsigned int));

	printf("long:%d\n", sizeof(long));
	printf("long int:%d\n", sizeof(long int));
	printf("signed long int:%d\n", sizeof(signed long int));
	printf("unsigned long int:%d\n", sizeof(unsigned long int));

	printf("long long:%d\n", sizeof(long long));
	printf("long long int:%d\n", sizeof(long long int));
	printf("signed long long int:%d\n", sizeof(signed long long int));
	printf("unsigned long long int:%d\n", sizeof(unsigned long long int));

	printf("float:%d\n", sizeof(float));

	printf("double:%d\n", sizeof(double));
	printf("long double:%d\n", sizeof(long double));

	printf("void*:%z\n", sizeof(void*));
	printf("void:%d\n", sizeof(void));
	printf("unsigned long long int *:%d\n", sizeof(unsigned long long int *));
	printf("unsigned long long int*:%d\n", (int) sizeof(unsigned long long int*));
}
