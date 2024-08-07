/*
 ============================================================================
 Name        : clang.c
 Author      : Ogrim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int lchj = 0;
extern int joestar; /*声明在joesph.c中定义的变量joestar*/

const unsigned char hx[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };
void printToHex(char * s, unsigned char * p, int len) {
	printf("%s", s);
	for (int i = 0; i < len; i++) {
		unsigned char t = *p++;
		printf("%c", hx[t >> 4]);
		printf("%c", hx[(t & 0x0f)]);
	}
	printf("\n");
}
char * th(unsigned char *p, int len) {
//	unsigned char m[len * 2];
	unsigned char * m = malloc(len * 2 * sizeof(char) + 1);
	for (int i = 0; i < len; i++) {
		unsigned char t = *p++;
		m[2 * i] = hx[t >> 4];
		m[2 * i + 1] = hx[t & 0x0f];
	}
	m[2 * len * sizeof(char)] = 0x00;
	return m;
}
typedef struct {
} DF;
void bl(){
	int a =8;
	unsigned char * b =(unsigned char *)&a;
	printf("0:%x 1:%x 2:%x 3:%x\n",b[0],b[1],b[2],b[3]);
}



int main(void) {
//	f_sv();
//	call_f_ary();

//	bl();
	DF df;
//	sa_f();

//	test_sizeof();

//	test_lchj();
//	test_local_static_variable();
//	test_local_static_variable();
//	test_global_static_variable();
//	test_global_static_variable();
//	test_global_static_variable2();
//	test_global_static_variable2();

//	test_s_1();

//	test_mem_1();

//	declare_ary();

//	test_scanf();

//	test_const();

//	call();

//	test_restrict4();

//	static_call();

//	print_byte();

//	func();

//	bitfield_1();

//	define_1();
//	define_7();
//	define_2();

//	print_pragma();

//	f_sig();

//	f_malloc();

	cfcfm();
//	unsigned char x [] = {char(0x01),char(0x03),char(0xef),char(0x06),char(0x0e)};
//	main2();
	return 2;
}

void print_extern_variable(void) {
	//printf("%d\n",joseph); joseph.c中的内部链接文件，只能在joseph.c中使用
	printf("%d\n", joestar); //joseph.c中的外部链接文件，可以所有地方使用，但要在文件开始处用extern声明
}
//void f_auto() {
//	auto autov = "ssss";
//	printf("%s\n", autov);
//	auto int a = 1003;
//	printf("%d\n", a);
//	auto b;
//	printf("%d\n", b);
//}

void f_malloc() {
	int *p;
	printf("%x\n", p);
	p = malloc(3 * sizeof(int));
	printf("%x\n", p);
	free(p);
	printf("%x\n", p);

}
inline void f_inline() {
	printf("%s\n", "It is a inline function.");
}

