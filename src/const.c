/*
 * const.c
 *
 *  Created on: 2016年12月22日
 *      Author: juliana
 */


void test_const(void){
	const int v = 1000;
	const int w = 2000;
	int z = 3000;

	const int * const a = &v;
//	*a = 4;
//	a=&w;

	const int * b = &v;
	b = &w;
	b=&z;//可以指向一个非const声明的变量，
	printf("%d\n",*b);
//	*b = 4000;//限定指针指向的内存内容不可变，指针的地址可变
	z=300;
	printf("%d\n",*b);

	int * const c = &v;
//	c = &w;//限定指针地址不可变，地址的内存内容可变
	*c=7000;

	const int s[]={3,5,8};
//	s[0]=100;

	const char cr[] = "this string can't be changed.";
//	cr[0]='d';

	const char * ch = "con't be changed.";
//	ch[0]='d';



}

void call(){
	int a[]={1,1};
	printf("%p\n",a);
	printf("%p\n",&a);
	int b = 99;
	printf("b:%p\n",&b);
	int *p=&b;
	printf("p:%p\n",&p);
	printf("pv:%p\n",p);

	prototype(a,b,p);
	printf("%d\n",a[0]);
	printf("%p\n",a);
	printf("%p\n",&a);

}
void prototype(const int a[],int b,int *p){
	printf("p:%p\n",&p);
	printf("pv:%p\n",p);
	printf("b:%p\n",&b);
	printf("%p\n",a);
	printf("%p\n",&a);
//	a[0]=100;
}
