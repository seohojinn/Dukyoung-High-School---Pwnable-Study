//gcc -o prob6 -m32 -z execstack -fno-stack-protector -mpreferred-stack-boundary=2 -no-pie prob6.c

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char array[30];

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

void vuln(char * command){
	
	char buf[100];

	printf("Second Input : ");
	read(0, buf, 120);

	system(command);
	exit(1);
}

int main(){

	init();
	char command[10] = "ls";

	printf("First Input : ");
	read(0, array, 20);

	vuln(command);

}
