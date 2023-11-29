#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char command[4][8] = {"ls -l", "id", "pwd", "ps"};
char name[30];

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

void menu(){

	puts("\n----- Linux Command Service -----");
	puts("0. ls -l");
	puts("1. id");
	puts("2. pwd");
	puts("3. ps");
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
