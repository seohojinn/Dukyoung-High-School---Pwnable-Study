//gcc -o rop_x86 -m32 rop_x86.c -mpreferred-stack-boundary=2 -fno-stack-protector

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){

	init();
	char buf[100] = {0,};

	puts("지난 시간에 배운 ROP 기법을 복습해보자!");
	read(0, buf, 0x100);

	return 0;
}
