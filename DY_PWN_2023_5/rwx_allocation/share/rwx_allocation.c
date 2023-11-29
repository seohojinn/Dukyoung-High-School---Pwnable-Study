#include <stdio.h>
#include <stdlib.h>

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

void gadget(){
	asm("pop %rdi");
	asm("pop %rsi");
	asm("pop %rdx");
	asm("ret");

}

int main(){

	init();
	
	char buf[0x100] = {0,};
	
	puts("Is there a way to use shellcode when the NX bit is activated?");
	printf("Your Input : ");

	gets(buf);

	return 0;
}
