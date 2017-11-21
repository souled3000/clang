/*
 * signal.c
 *
 *  Created on: 2017年2月6日
 *      Author: juliana
 */

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

int catch(int sig);

void f_sig(void) {
	signal(SIGINT, catch);
	printf("xixi\n");
	sleep(10);
	printf("end\n");
}

int catch(int sig) {
	printf("CATCH SIGINT!!\n");
	return 1;
}
