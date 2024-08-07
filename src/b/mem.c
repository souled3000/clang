/*
 * mem.c
 *
 *  Created on: 2016年12月22日
 *      Author: juliana
 */
#include <stdlib.h>
void test_mem_1(void){
	int *a=(int*)malloc(3*sizeof(int));
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	printf("%d\n",a[2]);
	free(a);

	int *b=(int*)calloc(3,sizeof(int));//calloc会把分配的内存置0，而malloc不会，所以malloc比calloc快
	printf("%d\n",b[0]);
	printf("%d\n",b[1]);
	printf("%d\n",b[2]);
	free(b);
}
