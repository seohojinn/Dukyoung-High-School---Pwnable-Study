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
	
	void * handle = dlopen("/Lib/1386-linux-gnu/libc.so.6",1);
	int (*system_addr) (const char* str) = dlsym(handle,"system");
	char buf[0x100];
	
	printf("system : %p\n", system_addr);
	printf("binsh : %p\n", binsh);

	read(0, buf, 0x1000);

	if(strcmp(buf+4, "dukyoung")){
		puts("Bye Bye ~");
		exit(1);
	}

	else if(strcmp(buf+30, "high")){
		puts("Bye Bye ~~");
                exit(1);
	}

	else if(strcmp(buf+100, "school")){
                puts("Bye Bye ~~~");
                exit(1);
	}

	return 0;
}
