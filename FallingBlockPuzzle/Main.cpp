//======================================
//      �������o�Y�� ���C��
//======================================
#include "Stage.h"
#include "Utility.h"
#include "IntervalTimer.h"
#include <stdio.h>
// �֐��v���g�^�C�v
static void game();

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
// �Q�[��
static void game()
{
	Stage stage[1];
	IntervalTimer timer[1];
	InitializeStage(stage);
	SetupFallBlock(stage);

	StartTimer(timer, 1); // FPS=1
	while (IsGameOver(stage) == false) {
		// ��莞�Ԃ��Ƃɗ����u���b�N��1���Ƃ�
		if (IsInterval(timer)) {
			//
			// ���������R�[�f�B���O���Ă�������
			//  MoveDownFallBlock()����т����܂�
			//
			{
				MoveDownFallBlock(stage);
			}
		}
		// �L�[���͂ŗ����u���b�N�ړ��E��]
		if (KeyAvailable()) {
			FallBlock fallBlock = GetFallBlock(stage); // �R�s�[�擾
			bool change = false;
			switch (GetKey()) {
				//
				// ���������R�[�f�B���O���Ă�������
				// ���͂��ꂽ�L�[�� ARROW_DOWN,_LEFT,_RIGHT�Ȃ�AfallBlock�������E�ֈړ������܂�
				//  (MoveFallBlock()���Ă�, change���Z�b�g���� )
				// ���͂��ꂽ�L�[���@" " (�X�y�[�X)�Ȃ� fallBlock����]�����܂�
				//  (RotateFallBlock()���Ă�, change���Z�b�g���� )
				//
			case ARROW_DOWN:
				MoveFallBlock(&fallBlock, 0, 1);
				change = true;
				break;
			case ARROW_LEFT:
				MoveFallBlock(&fallBlock, -1, 0);
				change = true;
				break;
			case ARROW_RIGHT:
				MoveFallBlock(&fallBlock, 1, 0);
				change = true;
				break;
			case ' ':
				RotateFallBlock(&fallBlock);
				change = true;
				break;
			}
			if (change) {
				// �ړ��܂��͉�]���������u���b�N���t�B�[���h�Փ˂Ȃ���΁A�X�V
				if (BlockIntersectField(stage, &fallBlock) == false) {
					SetFallBlock(stage, &fallBlock);  // �R�s�[�Z�b�g
					DrawScreen(stage);
				}
			}
		}
	}
}