//======================================
//	���o�[�V UI
//======================================
#include "Mode.h"
#include "Reversi.h"
#include "Vector2.h"
#include "Utility.h"
#include <stdio.h>  // printf()

Mode SelectMode()
{
	static const char* modeName[] = {
		"�P�o�@�f�`�l�d",
		"�Q�o�@�f�`�l�d",
		"�v�`�s�b�g"
	};
	int sel = 0;
	while (true) {
		ClearScreen();
		//
		// ���������R�[�f�B���O���Ă��������B
		//  ���[�h���@�I������
		//  ��������
		//  ���P�o�@�f�`�l�d
		//
		//  �@�Q�o�@�f�`�l�d
		//
		//  �@�v�`�s�b�g
		//
		// ��\�����܂��B(�J�[�\���� sel �̂Ƃ����) 
		//
		printf("���[�h���@�I������\n��������\n");


		switch (GetKey()) {
		case ARROW_UP:
			sel--;
			if (sel < 0) {
				sel = MODE_MAX - 1;
			}
			break;
		case ARROW_DOWN:
			sel++;
			if (sel >= MODE_MAX) {
				sel = 0;
			}
			break;
		case DECIDE:
			return (Mode)sel;
		}
	}
}
// �ʒu����
Vector2 InputPosition(Reversi* reversi)
{
	Vector2 pos = { 3,3 };
	while (true) {
		DrawScreen(reversi, pos, IN_PLAY);
		switch (GetKey()) {
			//
			// ���������R�[�f�B���O���Ă��������B
			// �L�[����(ARROW_UP,_DOWN,_LEFT_RIGHT)�ɂ����
			//  �J�[�\���ʒu(pos)���X�V���܂�
			//  pos.x �� 0�`BOARD_WID-1 �Ł@�E�[�ƍ��[�Ń��[�v���܂��B
			//  pos.y �� 0�`BOARD_HEI-1 �� ��[�Ɖ��[�Ń��[�v���܂��B
			//
		case DECIDE:
			if (CheckCanPlace(reversi, reversi->turn, pos) == false) {
				printf("�����ɂ́@�u���܂���\n");
				WaitKey();
				break;
			}
			return pos;
		}
	}
}