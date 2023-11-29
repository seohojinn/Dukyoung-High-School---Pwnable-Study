#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <dlfcn.h>

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){

	init();

	void * handle = dlopen("/lib/i386-linux-gnu/libc.so.6",1);
	int (*system_addr) (const char* str) = dlsym(handle,"system");
	char buf[0x100];

	printf("이번에는 빈에스에이취 문자열이 없습니다. 직접 만들어보세요!\n");
	printf("system : %p\n", system_addr);

	read(0, buf, 0x1000);




	return 0;
}
