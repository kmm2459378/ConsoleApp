//======================================
//	�}�C���X�B�[�p�[ ���C��
//======================================
#include "Stage.h"
#include "Utility.h"  // InitRand(),GetKey()
#include <stdio.h>  // printf()
// �֐��v���g�^�C�v
void game();

int main()
{
	InitRand();

	int c;
	do {
		game();
		printf("������x(y/n)?");
		while (true) {
			c = GetKey();
			if (c == 'y' || c == 'n') {
				break;
			}
		}
	} while (c == 'y');

	return 0;
}

void game()
{
	Stage stage[1];

	InitializeStage(stage);
	bool isEnd = false;
	while (isEnd == false) {
		DrawScreen(stage);
		Key c = GetKey();
		switch (c) {
		case ARROW_UP:
			// ���������R�[�f�B���O���Ă��������B
			// MoveCursor()���Ăт܂�
			break;
		case ARROW_DOWN:
			// ���������R�[�f�B���O���Ă��������B
			// MoveCursor()���Ăт܂�
			break;
		case ARROW_LEFT:
			// ���������R�[�f�B���O���Ă��������B
			// MoveCursor()���Ăт܂�
			break;
		case ARROW_RIGHT:
			// ���������R�[�f�B���O���Ă��������B
			// MoveCursor()���Ăт܂�
			break;
		case 'f':  // �t���Oon/off
			// ���������R�[�f�B���O���Ă��������B
			// FlipCursorFlag()���Ăт܂�
			break;
		case SPACE:  // �J��
			// ���������R�[�f�B���O���Ă��������B
			// OpenCursorCell()���Ăт܂��B
			// �Ԃ�l��isEnd �ɓ���܂�
			break;
		}
	}
	if (IsLose(stage)) {
		DrawScreen(stage);
		printf("\n�a�n�l�I�I�@�x�n�t�@�k�n�r�d�D\n");
	}
	else {
		DrawScreen(stage);
		printf("\n�b�k�d�`�q�I�@�x�n�t�@�v�h�m�D\n");
	}
}