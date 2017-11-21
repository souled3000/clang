/*
 * typedef.c
 *
 *  Created on: 2016年12月26日
 *      Author: juliana
 */

typedef char byte;
typedef char * msg;

void print_byte() {
	byte i[] = "aaaaaa";
	printf("%s", i);
}

void charary() {
	msg a, b;
	a = "abcd";
	b = "efgh";
	printf("%s", a);
	printf("%s\n", b);
}

typedef void (*f)(char* s);
typedef struct {
	f m;
} fm;
void cfm(char* s) {
	printf("%s\n", s);
}

void fcfm(fm* f);

void fcfm(fm* f) {
	f->m("xxxx");
}
void cfcfm() {
	fm a = {cfm};
	fm * m=&a;
	m->m = cfm;
	fcfm(m);
}
