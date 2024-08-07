/*
 * restrict.c
 *
 *  Created on: 2016年12月23日
 *      Author: juliana
 */
#include <stdlib.h>
void test_restrict1() {
	int * restrict p = (int*) malloc(4 * sizeof(int));
	int * a;
	a = p;
	a[0] = 100;
	printf("%d", a[0]);
	printf("%d", p[0]);
}

void test_restrict5() {
	int ar[10];
	int * restrict restar = (int *) malloc(10 * sizeof(int));
	int * par = ar;
	for (int n = 0; n < 10; n++) {
		par[n] += 5;
		restar[n] += 5;
		ar[n] *= 2;
		par[n] += 3;
		restar[n] += 3;
	}
}

void test_restrict3() {
	int * x = (int*) malloc(10 * sizeof(int));
	int * restrict y = x;

	x[0] = 3000;
	y[0] = 1000;
	printf("%d %d\n", x[0], y[0]);
}

void AA(int * p1, int *p2) {
	printf(" p1:%p\n", p1);
	printf("&p1:%p\n", &p1);
	printf(" p2:%p\n", p2);
	printf("&p2:%p\n", &p2);
}
int test_restrict4(void) {
	int * restrict p = (int *) malloc(5 * sizeof(int));
	printf(" pd:%p\n", p);
	printf("&pd:%p\n", &p);
	int * pa = (int *) malloc(5 * sizeof(int));
	printf(" pa:%p\n", pa);
	printf("&pa:%p\n", &pa);
	AA(p,pa);
	return 0;
}
