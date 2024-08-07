/*
 * string.c
 *
 *  Created on: 2016锟斤拷12锟斤拷21锟斤拷
 *      Author: Asteria
 */

#include <stdio.h>
#include <string.h>

void test_strlen() {
	char name[40]="a瑕�";
	printf("%s,%d,%d\n",name,sizeof name,strlen(name));

	char* desc="a瑕�";
	printf("%s\n",desc);
//	printf("%d,%d",sizeof desc,strlen(*desc));//strlen(*desc) won't work

	char* ca = "a瑕�";
	char* copy;
	copy = ca;
	printf("%s\n", copy);
	printf("%s %p %p\n", ca, &ca, ca);
	printf("%s %p %p\n", copy, &copy, copy);

}

void char_length(){
	char a = 'x';
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof('x'));
}

void string_len(){
	char a[]="a瑕�";
	printf("%d\n",strlen(a));
	char b = '瑕�';

	printf("%c\n",b);
	b= 'a';
	printf("%x\n",b);


}
