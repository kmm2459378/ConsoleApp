#include<stdio.h>

int main(void) 
{   
	int no;
	printf("³‚Ì”‚Ì“ü—Í\n");
	scanf_s("%d", &no);
	while (no >= 0) {
		printf("%d", no);
		no--;
	}
}