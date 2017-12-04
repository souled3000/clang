/*
 * struct.c
 *
 *  Created on: 2016Äê12ÔÂ24ÈÕ
 *      Author: Asteria
 */


struct people{
	char* name;
	int age;
};

void print_people(){
	struct people b= {"lchj",10000};
	printf("%s:%d\n",b.name,b.age);
	struct people *a= &b;
//	struct people *a= (struct people *){"lchj",10000};
	printf("%d\n",sizeof(*a));
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(struct people));
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(int));
	printf("%s:%d\n",a->name,a->age);



	struct people p1={.name="asteria"};
	struct people p2={.name="asteria",.age=20};
	struct people p3={.name="asteria",.age=20,.name="pendleton"};
	printf("%s\n",p3.name);

}


void swap(struct people * p1,struct people *p2){
	struct people * p = p1;
	p1=p2;
	p2=p;
}

void assign1(struct people* p){
	p->name="pendleton";
}
void assign2(struct people p){
	p.name = "pendleton";
}

void call(void){
	struct people n = {.name="juliana"};
	struct people m = {.name="asteria"};
	struct people * p1 = &m;
	struct people * p2 = &n;

	printf("p1:%p\n",&p1);
	printf("p1:%p\n",p1);
	printf("p2:%p\n",&p2);
	printf("p2:%p\n",p2);
	swap(p1,p2);
	printf("p1:%p\n",&p1);
	printf("p1:%p\n",p1);
	printf("p2:%p\n",&p2);
	printf("p2:%p\n",p2);

	printf("%s\n",n.name);
	printf("%s\n",m.name);
	printf("%s\n",p1->name);
	printf("%s\n",p2->name);

	assign1(p1);
	printf("%s\n",m.name);

	assign2(n);
	printf("%s\n",n.name);



}
