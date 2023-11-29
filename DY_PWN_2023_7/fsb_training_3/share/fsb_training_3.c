
#include <stdio.h>
#include <stdlib.h>

void winwinwin(){
	system("/bin/sh");
}

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){
	
	init();

	char buf[100] = {0,};
	
	puts("Welcome to FSB Training x64 Memory OverWrite Practice!!!");	

	fgets(buf, 50, stdin);

	printf(buf);

	exit(1);
}


