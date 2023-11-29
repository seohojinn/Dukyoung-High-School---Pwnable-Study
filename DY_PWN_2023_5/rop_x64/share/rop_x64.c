//gcc -o rop_x64 rop_x64.c -mpreferred-stack-boundary=4 -fno-stack-protector -no-pie

#include <stdio.h>
#include <stdlib.h>

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){

	init();
	char buf[100] = {0,};

	puts("Basic x64 ROP Exploit ^^");
	gets(buf);

	return 0;
}
