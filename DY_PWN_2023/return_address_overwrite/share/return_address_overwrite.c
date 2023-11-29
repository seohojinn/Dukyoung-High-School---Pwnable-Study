//gcc -o return_address_overwrite -m32 -fno-stack-protector -mpreferred-stack-boundary=2 -no-pie return_address_overwrite.c

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void init(){
	setvbuf(stdin,NULL,_IONBF,0);
	setvbuf(stdout,NULL,_IONBF,0);
}

void win(){
	system("/bin/sh");
}

int main(){
	
	init();

	char buf[0x100] = {0,};
	printf("Your Input : ");
	read(0, buf, 0x200);

	printf("%s\n",buf);

	return 0;
}
