#include<stdio.h>

int main(void) 
{   
	int no;
	printf("正の数の入力\n");
	scanf_s("%d", &no);
	while (no >= 0) {
		printf("%d", no);
		no--;
	}
}