/*
 * string.c
 *
 *  Created on: 2016年12月22日
 *      Author: juliana
 */

#include <stdlib.h>
void test_s_1(void){
	char* s ="哈哈";
	printf("%s\n",s);
	printf("指针的值：%p\n",s);
	printf("指针地址的值：%p\n",&s);
	puts("");

	char a[]="吼吼";
	s=a;
	printf("%s\n",a);
	printf("%s\n",s);
	printf("数组地址：%p\n",a);
	printf("指针的值：%p\n",s);
	printf("指针地址的值：%p\n",&s);


	puts("");
	char* aa[2]={"嘻嘻","呵呵"};
	printf("指针的值：%p\n",aa);
	printf("指针地址的值：%p\n",&aa);
	printf("%p\n",&aa[0]);

	printf("%p\n",aa[0]);
	printf("%s\n",aa[0]);
	printf("%s\n",aa[1]);


}
