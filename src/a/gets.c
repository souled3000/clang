/*
 * gets.c
 *
 *  Created on: 2016年12月24日
 *      Author: Asteria
 */

#include <stdio.h>
#define MAX 30
void test_gets(){
	char name[30];
	char * name2;
	name2 = gets(name);
	printf("%s,%s",name,name2);
}

void test_fgets(){
	char name[MAX];
	char * p;
	p = fgets(name,MAX,stdin);
	printf("%s,%s",name,p);
}
