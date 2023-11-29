
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

	char buf[100] = {0,};
	FILE* fp = fopen("/home/fsb_training_2/flag","r");

	if(fp == NULL){
		puts("/home/fsb_training_2/ 에 flag 파일이 없습니다....");
		exit(1);
	}

	fscanf(fp, "%s", flag);

	puts("Welcome to FSB Training x64 !!!");
	printf("Your Input : ");

	read(0, buf, 70);
	printf(buf);

	exit(1);
}


