//======================================
//	���o�[�V ���C��
//======================================
#include "Utility.h"
#include "Reversi.h"
#include "UI.h"
#include "Vector2List.h"
#include <stdio.h>  // printf()
// �֐��v���g�^�C�v
static void game(Reversi* reversi, Vector2List* v2list);

int main()
{
	InitRand();
	Reversi reversi;
	Vector2List v2list;
	InitializeVector2List(&v2list, BOARD_WID * BOARD_HEI);

	bool isEnd = false;
	while (isEnd == false) {
		game(&reversi, &v2list);
		printf("\n������x (y/n):");
		while (true) {
			Key k = GetKey();
			if (k == 'y') {
				break;
			}
			if (k == 'n') {
				isEnd = true;
				break;
			}
		}
	}
	FinalizeVector2List(&v2list);
	return 0;
}

void game(Reversi* reversi, Vector2List* v2list)
{
	Vector2 dummyPos = { -1,-1 };
	Mode mode = SelectMode();
	Init(reversi, mode);
	while (true)
	{
		Cell turn = reversi->turn;
		// �łĂ�Ƃ��낪���邩?
		if (CheckCanPlaceAll(reversi, turn)) {
			Vector2 placePos = { 0,0 };
			if (IsHumanPlayer(reversi)) {
				// �l�ԃv���[��
				placePos = InputPosition(reversi);
			}
			else {
				// CPU�v���[��
				DrawScreen(reversi, dummyPos, IN_PLAY);
				WaitKey();
				// �łĂ郊�X�g���烉���_���ɑI��.
				//
				// ���������R�[�f�B���O���Ă�������
				//  v2list���N���A
				//  ListCanPlaceAll() �őłĂ�Ƃ�������X�e�B���O
				//  v2list����o�^�����擾����
				//  0�`�o�^��-1�̗������擾(�C���f�b�N�X)
				//  v2list����A�C���f�b�N�X�ɑΉ����� Vector2���擾���� placePos�Ɋi�[����
				//
			}
			CheckCanPlace(reversi, turn, placePos, true);
			SetBoard(reversi, placePos.x, placePos.y, turn);
		}
		else {
			// ������łĂȂ��Ȃ�I��
			Cell opponent = GetOpponent(turn);
			if (CheckCanPlaceAll(reversi, opponent) == false) {
				break;
			}
			// �u�łĂȂ��v�\��
			DrawScreen(reversi, dummyPos, NO_PLACE);
			WaitKey();
		}
		NextTurn(reversi);
	}
	// ���U���g�\��
	DrawScreen(reversi, dummyPos, RESULT);
	WaitKey();
}