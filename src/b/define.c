/*
 * define.c
 *
 *  Created on: 2016年12月30日
 *      Author: juliana
 */
#define ONE "THIS is ONE."
#define ZERO 2
#define TWO ZERO*ZERO
#define PX printf("%d\n",x)
#define PATTERN "%d\n"
#define SQUARE(x) (x)*(x)
#define PTX(x) printf("%d\n",x)
#define ptstring(x) printf("%s\n",x)
#define LONGSTRING "this is \
	a Long string ZERO"
//#define swap((a),(b))
void define_1() {
	printf("%s\n", ONE);
	printf("%d\n", TWO);
	int x = ZERO;
	PX;
	printf(PATTERN, ZERO);
	x = SQUARE(ZERO);
	PX;
	PTX(ZERO);

	printf("%s\n", "PTX(SQUARE(ZERO)):");
	PTX(SQUARE(ZERO));

	ptstring(LONGSTRING);

}

#define XNAME(x) n##x
#define PXNAME(x) printf("%d\n",n##x)
void define_2() {
	int XNAME(1) = 100;
	int XNAME(2) = 200;
	PXNAME(1);
	PXNAME(2);

}
void define_3() {
#define LIMIT 20

}
void define_4() {
	printf("LIMIT:%d\n", LIMIT);
}

void define_5() {
	const int LIM = 50;
	static int data1[LIMIT];
//static int data2[LIM];
	const int LIM1 = 2 * LIMIT;
	const int LIM2 = 2 * LIM;
	printf("%d\n", LIM2);
}

#define PTV(x) printf("The square of " #x " is %d.\n", ((x)*(x)));
void define_6() {
	int z = 300;
	PTV(z);
	PTV(5 + 3);
	printf("%s\n", "end " " end" " end");
}

#define PR(...) printf(__VA_ARGS__)

void define_7() {
	PR("Howdy");
	int wt = 3;
	float sp = 3.3;
	PR("weight= %d, shipping=$%.2f\n", wt, sp);
}
