//==========================================================
//	a?b�̑��a
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sscanf(),scanf(),printf()
// �֐��v���g�^�C�v
int SumOfFromTo(int from, int to);
void calcSum(int a, int b);

int main(int argc, char* argv[])
{
	int a, b;
	if (argc >= 3) {
		sscanf(argv[1], "%d", &a);
		sscanf(argv[2], "%d", &b);
		calcSum(a, b);
	}
	else {
		while (true) {
			printf("a�̒l:");
			scanf("%d", &a);
			printf("b�̒l:");
			scanf("%d", &b);
			calcSum(a, b);
		}
	}
	return 0;
}
void calcSum(int a, int b)
{
	int sum = SumOfFromTo(a, b);
	printf("%d?%d�̑��a��%d\n", a, b, sum);
}

int SumOfFromTo(int from, int to)
{
	// �������R�[�f�B���O���Ă��������B
	// from<to �̏ꍇ���Ή����Ă��������B
}