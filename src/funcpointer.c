/*
 * funcpointer.c
 *
 *  Created on: 2016年12月28日
 *      Author: juliana
 */



void func_1 (char *);
void func_1(char* msg){
	printf("func_1:%s\n",msg);
}
void func_2 (char *);
void func_2(char* msg){
	printf("func_2:%s\n",msg);
}

void call_func(void (*fp)(char*)){
	char msg[]="called";
	fp(msg);
}

void func(){
	call_func(func_1);
	call_func(func_2);
}




