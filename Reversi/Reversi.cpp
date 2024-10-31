//======================================
//	���o�[�V
//======================================
#include "Reversi.h"
#include "Vector2.h"
#include "Utility.h"
#include <stdio.h>  // printf()
#include <assert.h> // assert()
// �֐��v���g�^�C�v
bool inBoard(int x, int y);
const char* getTurnName(Cell turn);

const char* diskAA[] = {
	"�E",  // NONE
	"��",  // BLACK
	"�Z",  // WHITE
	"��",  // OUT
};

// �{�[�h�̎w��ʒu�ɑ��
void SetBoard(Reversi* reversi, int x, int y, Cell value)
{
	//
	// ���������R�[�f�B���O���Ă��������B
	// inBoard()���m�F���ā@board��(x,y)���W��value���i�[���܂�
	// inBoard()�O�Ȃ�A�������܂���
	//
}
// �{�[�h�̎w��ʒu���擾
Cell GetBoard(Reversi* reversi, int x, int y)
{
	//
	// ���������R�[�f�B���O���Ă��������B
	// inBoard()���m�F���ā@board��(x,y)���W�̒l��Ԃ��܂��B
	// inBoard()�O�Ȃ�AOUT ��Ԃ��Ă��������B
	//
}
// ������
void Init(Reversi* reversi, Mode mode)
{
	reversi->mode = mode;
	//
	// ���������R�[�f�B���O���Ă��������B
	// �{�[�h��������Ԃɂ��܂��B
	// �E�E�E�E�E�E�E�E
	// �E�E�E�E�E�E�E�E
	// �E�E�E�E�E�E�E�E
	// �E�E�E�Z���E�E�E
	// �E�E�E���Z�E�E�E
	// �E�E�E�E�E�E�E�E
	// �E�E�E�E�E�E�E�E
	// �E�E�E�E�E�E�E�E
	//
	reversi->turn = BLACK;
}
// ���̃^�[����
void NextTurn(Reversi* reversi)
{
	reversi->turn = GetOpponent(reversi->turn);
}
// �w��ʒu�ɐ΂������邩
bool CheckCanPlace(Reversi* reversi, Cell myself, Vector2 pos, bool turnOver)
{
	bool canPlace = false;
	// ���ɒu����Ă���?
	if (GetBoard(reversi, pos.x, pos.y) != NONE) {
		return false;
	}
	Cell opponent = GetOpponent(myself);
	// �W�����ɂ��āA
	for (int d = 0; d < DIR_MAX; d++) {
		Vector2 scan = pos;
		Vector2 dir = GetDirVector2((DIRECTION)d);
		// �ׂ͑���R�}?
		// 
		// ���������R�[�f�B���O���Ă��������B
		// scan��dir�i�߂āA
		// (scan.x,scan.y)�̃{�[�h������R�}�łȂ����
		// �u���Ȃ��̂� ����for()�ֈڍs���܂�(continue)
		//
		// ����R�}�łȂ��Ȃ�܂Ői�߂�
		Cell tmp;
		//
		// ���������R�[�f�B���O���Ă��������B
		// scan��dir�i�߂Ă�����
		// (scan.x,scan.y)�̃{�[�h������R�}�łȂ��Ȃ�܂�
		// �J��Ԃ��܂�
		// 
		// �����̃R�}�Ȃ�Aplace��
		if (tmp == myself) {
			canPlace = true;
			// �Ђ����肩����
			if (turnOver) {
				scan = pos;
				do {
					AddVector2(&scan, &dir);
					tmp = GetBoard(reversi, scan.x, scan.y);
					if (tmp == opponent) {
						SetBoard(reversi, scan.x, scan.y, myself);
					}
				} while (tmp == opponent);
			}
		}
		// �u�u����vturnOver���Ȃ��Ȃ�A�I��
		if (canPlace && turnOver == false) {
			break;
		}
	}
	return canPlace;
}
// �R�}�̐��𐔂���
int getDiskCount(Reversi* reversi, Cell myself)
{
	int count = 0;
	//
	// ���������R�[�f�B���O���Ă�������
	// �{�[�h�𑖍����āAmyself �ƈ�v������̂��J�E���g���܂��B
	//
	return count;
}
// �΂��ǂ����ɒu���邩?
bool CheckCanPlaceAll(Reversi* reversi, Cell myself)
{
	for (int y = 0; y < BOARD_HEI; y++) {
		for (int x = 0; x < BOARD_WID; x++) {
			Vector2 pos = { x,y };
			if (CheckCanPlace(reversi, myself, pos)) {
				return true;
			}
		}
	}
	return false;
}
// �u����ꏊ�����X�e�B���O
void ListCanPlaceAll(Reversi* reversi, Cell myself, Vector2List* list)
{
	Vector2 pos;
	for (pos.y = 0; pos.y < BOARD_HEI; pos.y++) {
		for (pos.x = 0; pos.x < BOARD_WID; pos.x++) {
			if (CheckCanPlace(reversi, myself, pos)) {
				AddVector2List(list, pos);
			}
		}
	}
}
// ��ʕ`��
void DrawScreen(Reversi* reversi, Vector2 pos, DrawStatus stat)
{
	ClearScreen();
	bool isCursor = (stat == IN_PLAY) && IsHumanPlayer(reversi);
	//
	// ���������R�[�f�B���O���Ă��������B
	// �{�[�h�𑖍�����cell�ɂ���� diskAA[] ��\�����܂��B
	// isCorsor���^�Ȃ�Apos�ɑΉ��������A�E�Ɂ������Ɂ���\�����܂��B
	// �E�E�E�E�E�E�E�E�E
	// �E�E�E�E�E�E�E�E�E
	// �E�E�E�E�E�E�E�E�E
	// �E�E�E�Z���E�E�E�E��
	// �E�E�E���Z�E�E�E�E
	// �E�E�E�E�E�E�E�E�E
	// �E�E�E�E�E�E�E�E�E
	// �E�E�E�E�E�E�E�E�E
	// �@�@�@��
	//
	putchar('\n');

	switch (stat) {
	case IN_PLAY:
	case NO_PLACE:
		// 
		// ���������R�[�f�B���O���Ă��������B
		// �u�`�̃^�[���ł��v��\�����܂�
		// �X�� NO_PLACE�̂Ƃ���
		// �u�łĂ�Ƃ��낪����܂���v��\�����܂�
		//
		break;
	case RESULT:
	{
		int blackCount = getDiskCount(reversi, BLACK);
		int whiteCount = getDiskCount(reversi, WHITE);
		// 
		// ���������R�[�f�B���O���Ă�������
		// �u��xx-��xx�v(xx�̓R�}��)��\�����܂�
		// �R�}���������Ȃ�
		// �u���������ł��v��\�����܂�
		// �����łȂ����
		// �u�`�̏����ł��v��\�����܂�
		// 
	}
	break;
	}
}

bool IsHumanPlayer(Reversi* reversi)
{
	switch (reversi->mode) {
	case MODE_1P:
		return reversi->turn == BLACK;
	case MODE_2P:
		return true;
	default:
	case MODE_WATCH:
		return false;
	}
}

const char* getTurnName(Cell turn)
{
	if (turn == BLACK) {
		return "��";
	}
	if (turn == WHITE) {
		return "��";
	}
	assert(false);
	return "";
}
// ����̐F���擾
Cell GetOpponent(Cell value)
{
	if (value == WHITE) {
		return BLACK;
	}
	if (value == BLACK) {
		return WHITE;
	}
	assert(false);
	return NONE;
}
// ���W���{�[�h����?
bool inBoard(int x, int y)
{
	return 0 <= x && x < BOARD_WID
		&& 0 <= y && y < BOARD_HEI;
}
