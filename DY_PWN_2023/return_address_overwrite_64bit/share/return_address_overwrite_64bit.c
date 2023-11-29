//gcc -o return_address_overwrite_64bit -fno-stack-protector -mpreferred-stack-boundary=4 -no-pie return_address_overwrite_64bit.c

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void init(){
        setvbuf(stdin,NULL,_IONBF,0);
        setvbuf(stdout,NULL,_IONBF,0);
}

void win(){
        system("/bin/sh");
}

int main(){

        init();

        char buf[0x100] = {0,};
	puts("이 번 에 는 6 4 b i t 버 전 이 다");
        printf("Your Input : ");
	read(0, buf, 0x200);

        printf("%s\n",buf);

        return 0;
}
