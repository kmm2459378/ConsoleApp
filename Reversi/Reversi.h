#pragma once
//======================================
//	���o�[�V
//======================================
// �������ɃC���N���[�h�K�[�h(�J�n)���L�����Ă�������
#ifndef _CELL__H
#define _CELL__H
#include "Mode.h"
#include "Vector2.h"
#include "Vector2List.h"
#include <assert.h>   // assert()

const int BOARD_WID = 8;
const int BOARD_HEI = 8;

// Board��ԁA�^�[��(BLACK,WHITE)
typedef enum {
	NONE,
	BLACK,
	WHITE,
	OUT,
}Cell;

// ���o�[�V�\����
typedef struct {
	Cell board[BOARD_HEI][BOARD_WID];
	Cell turn;  // BLACK<=>WHITE
	Mode mode;  // MODE_1P,MODE_2P,WATCH
} Reversi;

// �`�掞�̃X�e�[�^�X
typedef enum {
	IN_PLAY,   // �v���C��
	NO_PLACE,  // �łĂ�ꏊ���Ȃ�
	RESULT,    // ���U���g
}DrawStatus;

// �{�[�h�ɒl���Z�b�g
void SetBoard(Reversi* reversi, int x, int y, Cell value);
// �{�[�h�̒l���擾
Cell GetBoard(Reversi* reversi, int x, int y);
// ������
void Init(Reversi* reversi, Mode mode);
// ���̃^�[��
void NextTurn(Reversi* reversi);
// ��ʕ`��
void DrawScreen(Reversi* reversi, Vector2 pos, DrawStatus stat);
// �w��ʒu�ɒu���邩?
bool CheckCanPlace(Reversi* reversi, Cell myself, Vector2 pos, bool turnOver = false);
// �΂��ǂ����ɒu���邩?
bool CheckCanPlaceAll(Reversi* reversi, Cell myself);
// �΂��u����Ƃ�������X�e�B���O
void ListCanPlaceAll(Reversi* reversi, Cell myself, Vector2List* list);
// �΂̐����J�E���g
int GetDiskCount(Reversi* reversi, Cell myself);
// �v���[�����삩?
bool IsHumanPlayer(Reversi* reversi);
//  ����𓾂�
Cell GetOpponent(Cell myself);
// �������ɃC���N���[�h�K�[�h(�I��)���L�����Ă�������
#endif