#include<stdio.h>

int main(void) 
{   
	int no;
	printf("���̐��̓���\n");
	scanf_s("%d", &no);
	while (no >= 0) {
		printf("%d", no);
		no--;
	}
}