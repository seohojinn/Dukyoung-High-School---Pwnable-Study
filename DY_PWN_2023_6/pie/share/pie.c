

#include <stdio.h>
#include <stdlib.h>

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
	char buf[100];
	
	puts("PIE bypass Practice!!");
	printf("Hint : %p\n", init);

	gets(buf);
	
	return 0;
}

