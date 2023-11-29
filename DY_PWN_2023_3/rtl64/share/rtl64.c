#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <dlfcn.h>

char * binsh = "/bin/sh";

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){

	init();

	void * handle = dlopen("/lib/x86_64-linux-gnu/libc.so.6",1);
	int (*system_addr) (const char* str) = dlsym(handle,"system");
	char buf[0x100];

	puts("Keep that in mind https://hackyboiz.github.io/2020/12/06/fabu1ous/x64-stack-alignment/");
	printf("system : %p\n", system_addr);
	printf("binsh : %p\n", binsh);

	read(0, buf, 0x1000);

	return 0;
}
