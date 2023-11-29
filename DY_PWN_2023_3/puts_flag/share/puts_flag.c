#include <stdio.h>
#include <stdlib.h>

char flag[100];

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){

	init();

	FILE* fp = fopen("/home/puts_flag/flag","r");
        fscanf(fp, "%s", flag);

	char buf[0x100] = {0,};

	puts("Give me your exploit code ~~");
	gets(buf);

	return 0;
}
