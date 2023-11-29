//gcc -o prob3 -m32 -fno-stack-protector -mpreferred-stack-boundary=2 -no-pie prob3.c

#include <stdio.h>
#include <stdlib.h>

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){

	init();

	char buf[244] = {0,};
	int a = 1, b = 2;

	printf("your exploit : ");
	gets(buf);

	if(a == 4096 && b == 8192){
		puts("G00d G00d");
		system("/bin/sh");
	} 	
	
	exit(1);
}
