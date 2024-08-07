/*
 * struct.c
 *
 *  Created on: 2016年12月30日
 *      Author: juliana
 */

struct book {
	char* name;
};

void struct_f_1() {
	struct book book;
	book.name = "hehe";
	struct book* p;
	p->name = "haha";

	struct title {
		char* name;
	} title;
	title.name = "hoho";

	struct {
		char* name;
	} noname;
	noname.name = "noname";

	struct book b = { "a book" };

	struct people {
		char *name;
		int age;
	} man = { .name = "ateria", .age = 10 };

	struct library {
		char * name;
		unsigned long long amount;
		char * books[];
	};

	struct library* lbr = (struct library *) malloc(sizeof(struct library) + 1000 * sizeof(unsigned long long));

}
#pragma pack(1)
typedef struct {
	int a1;
	long long a3;
	char a2[];
} sv1;
typedef struct {
	sv1 a1;
	sv1 a2;
} so1;
#pragma pack()
void f_sv() {
	printf("%d\n", sizeof(so1));
	so1 s;
	printf("%d\n", sizeof(s));
	s.a1 = *(sv1 *) malloc(20);
	printf("%d\n", sizeof(s.a1));

	sv1 a = *(sv1 *) malloc(20);
	a.a1=1;
	a.a3=1;
	a.a2[2]=0xff;
	a.a2[1]=0xff;
	a.a2[0]=0xff;
	a.a2[3]=0xff;
	a.a2[4]=0xff;
	a.a2[5]=0xff;
	a.a2[6]=0xff;
	a.a2[7]=0xff;

	unsigned char xxx[20];
	memcpy(xxx,&a,20);
	printToHex("a:",xxx,20);

	memcpy(&s.a2,&a,20);
	s.a2.a2[7]=0xee;
	memcpy(xxx,&s.a2,20);
	printToHex("s.a2:",xxx,20);


	sv1 x ;
	x.a1=0x11;
	x.a3=0x11;
	unsigned char xx[30];
	memcpy(xx,&x,sizeof(x));
	printToHex("",xx,sizeof(x));
}
