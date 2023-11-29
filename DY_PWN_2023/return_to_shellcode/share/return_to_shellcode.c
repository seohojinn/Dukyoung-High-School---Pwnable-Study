//gcc -o return_to_shellcode -m32 -z execstack -fno-stack-protector -mpreferred-stack-boundary=2 -no-pie return_to_shellcode.c

#include <stdio.h>
#include <stdlib.h>

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){

	init();

	char buf[0x100] = {0,};

	puts("# checksec give_me_the_shellcode\n");

	puts("————————————————");
	puts("| Arch:     i386-32-little     |");
	puts("| RELRO:    Partial RELRO      |");
	puts("| Stack:    No canary found    |");
	puts("| NX:       NX disabled        |");
	puts("| PIE:      No PIE (0x8048000) |");
	puts("| RWX:      Has RWX segments   |");
	puts("————————————————\n");	

	printf("buf : %p\n\n",buf);
	printf("your exploit : ");
	gets(buf);

	

	return 0;
}
