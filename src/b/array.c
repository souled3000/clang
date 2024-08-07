/*
 * array.c
 *
 *  Created on: 2016年12月22日
 *      Author: juliana
 */
#include <stdio.h>
void declare_ary(void){
	int a[]={1,2,3};
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	printf("%d\n",a[2]);

//	int *k = 0x0000000bbd;
//	printf("k:%d\n",*k);
//	int *b={3,4,5}; //竟然也不报错，但是不能用
	int *b=a;
	printf("%d\n",b[0]);
	printf("%d\n",b[1]);
	printf("%d\n",b[2]);

	int d[3];
	printf("%d\n",d[0]);
	printf("%d\n",d[1]);
	printf("%d\n",d[2]);

	int c[2] = {1,3,4};//注意这儿，不检查
	printf("%d\n",c[2]);//打印的不是4，不一定打印什么
	printf("%d\n",c[0]);
	printf("%d\n",c[1]);

	int c1[2];
//	c1=c;
	printf("%d\n",c1[1]);
}

void call_f_ary(){
	int a[3];
	a[0]=200;
	f_ary(a);
	printf("%d\n",a[0]);
}
void f_ary(int a[3]){
	a[0]=300;
	printf("%d\n",a[0]);
}
