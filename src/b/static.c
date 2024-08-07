/*
 * static.c
 *
 *  Created on: 2016年12月23日
 *      Author: juliana
 */

void static_call(){
	int a[5];
	static_methd1(a);
	int b[20];
	static_methd1(b);
}
void static_methd1(int a[static 10]){
	printf("%d\n",sizeof(a));
}

