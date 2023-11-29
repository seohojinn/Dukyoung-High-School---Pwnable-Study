#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

void win(){
	system("/bin/sh");
}

int main(){

	init();	
	char buf[100] = {0,};

	read(0, buf, 1000);

	printf("Your Input : %s\n", buf);
	printf("Second Input : ");

	gets(buf);

	printf("Your Second Input : %s\n", buf);

	return 0;
}


