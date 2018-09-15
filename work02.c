#include <stdio.h>
#include <stdlib.h>

void print_bytes(int x){
	char *px = &x;
	printf("each byte:\n");
	for (int i = 0; i < 4; i ++){
		printf("%hhx\n", *px);
		px ++;
	}
}

void increment_1(int x){
	char *px = &x;
	printf("incremented by 1:\n");
	for (int i = 0; i < 4; i ++){
		*px += 1;
		printf("%hhx\n", *px);
		px ++;
	}
}

void increment_16(int x){
	char *px = &x;
	printf("incremented by 16:\n");
	for (int i = 0; i < 4; i ++){
		*px += 16;
		printf("%hhx\n", *px);
		px ++;
	}
}

int main(){
	unsigned int x = 3000000000;
	printf("%x\n", x);

	print_bytes(x);
	increment_1(x);
	increment_16(x);

	return 0;
}