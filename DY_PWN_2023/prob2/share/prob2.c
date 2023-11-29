#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_user_choice();
int get_computer_choice();
int decide_winner(int user_choice, int computer_choice);
void init();


int main() {
    	int user_score = 0;
	init();
	srand(time(NULL));
	
	puts("----------------------------- RPS GAME ------------------------------------");
        puts("저랑 가위바위보 100 판을 연속으로 이기면 쉘을 선물로 드리겠습니다~!~!!!");
	puts("쉘을 얻어 서버 내부에 있는 FLAG를 가져가세요!\n");
    	
	for (int i = 0; i < 100; i++) {
        	int computer_choice = get_computer_choice();
		if(computer_choice == 1){
			printf("Computer chose: Rock\n");
		}
		else if(computer_choice == 2){
			printf("Computer chose: Paper\n");
		}	
		else if(computer_choice == 3){
			printf("Computer chose: Scissors\n");
		}
		int user_choice = get_user_choice();


        	int result = decide_winner(user_choice, computer_choice);

        	if (result == 1) {
            		printf("You win!\n\n");
            		user_score++;
			printf("uesr score : %d\n",user_score);
        	} 
		else if (result == -1) {
            		puts("다시 도전하세용....");
			return 0;
        	} 
		else {
            		printf("It's a tie!\n\n");
        	}
    	}

    	if (user_score >= 100) {
        	puts("축하드립니다~!");
        	system("/bin/sh");
    	}

    	return 0;
}

void init(){
        setvbuf(stdin,0,2,0);
        setvbuf(stdout,0,2,0);
}

int get_user_choice() {
    	int choice;
    	printf("Enter your choice (1: Rock, 2: Paper, 3: Scissors): ");
    	scanf("%d", &choice);
    	return choice;
}

int get_computer_choice() {
    	return rand() % 3 + 1; // 1, 2, 3 중 무작위로 선택
}

int decide_winner(int user_choice, int computer_choice) {
    	if (user_choice == computer_choice) {
        	return 0; // 비김
    	} 
	else if ((user_choice == 1 && computer_choice == 3) ||
        	(user_choice == 2 && computer_choice == 1) ||
               (user_choice == 3 && computer_choice == 2)) {
        	return 1; // 사용자 승리
    	} 
	else {
        	return -1; // 컴퓨터 승리
    	}
}

