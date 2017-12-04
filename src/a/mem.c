/*
 * mem.c
 *
 *  Created on: 2017Äê1ÔÂ2ÈÕ
 *      Author: Asteria
 */

void mem_1(){
	char* l=(char*)malloc(6*sizeof(char));
//	l = "1234567890333333";
	l[0]='a';
	l[1]='a';
	l[2]='a';
	l[3]='a';
	l[4]='a';
	l[5]='a';
//	l[6]='a';
//	l[7]='a';
	printf("%s\n",l);
	free(l);
	printf("%s",l);
//	free(l);
	printf("%s",l);

}

void alloca_1(){
}
