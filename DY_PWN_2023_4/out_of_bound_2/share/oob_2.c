#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char * command[4] = {"ls -a", "uname -a", "id", "pwd"};
char name[30];

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

void menu(){

	puts("\n----- Linux Command Service Ver.2 -----");
	puts("0. ls -a");
	puts("1. uname -a");
	puts("2. id");
	puts("3. pwd");
	puts("4. Program Exit");
	puts("---------------------------------");
}

int main(){
	
	init();
	int choice = 0;
	
	printf("Hello~! Your name? : ");
	read(0, name, 25);

	while(1){
		menu();
		printf("\nYour select : ");
		scanf("%d", &choice);
		if(choice == 4){
			puts("Bye~~ Bye~~");
			break;
		}
		system(command[choice]);
	}

	return 0;
}
