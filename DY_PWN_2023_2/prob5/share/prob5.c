//gcc -o prob5 -z execstack -fno-stack-protector -mpreferred-stack-boundary=4 -no-pie prob5.c

#include <stdio.h>
#include <unistd.h>

void init(){
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){

	init();
	
	char buf[0x100] = {0,};
	
	printf("buf address : %p\n",buf);

	printf("Give me your she11c0de : ");
	read(0, buf, 0x1000);


	return 0;
}
