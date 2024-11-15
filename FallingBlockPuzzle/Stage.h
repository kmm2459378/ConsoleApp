#pragma once
//======================================
//      �������o�Y�� �X�e�[�W
//======================================
// �������ɃC���N���[�h�K�[�h(�J�n)���L�����Ă�������
//
#include "BlockShape.h"
#include "FallBlock.h"
#ifndef __FIELD_WIDTH_H
#define __FIELD_HEIGHT_H


const int FIELD_WIDTH = 12;
const int FIELD_HEIGHT = 18;

typedef enum {
	BLK_NONE,  // �u���b�N�Ȃ�
	BLK_WALL,  // ��
	BLK_FIX,   // �蒅�u���b�N
	BLK_FALL,  // �����u���b�N
	BLK_MAX,
}Block;

// �X�e�[�W�̒�`
typedef struct {
	Block field[FIELD_HEIGHT][FIELD_WIDTH];
	FallBlock fallBlock;
	bool isGameOver;
} Stage;

// �w��ʒu�̃t�B�[���h�փZ�b�g
void SetField(Stage* stage, int x, int y, Block blk);
// �w��ʒu�̃t�B�[���h�擾
Block GetField(Stage* stage, int x, int y);
// �����u���b�N���t�B�[���h�ɏՓ�?
bool BlockIntersectField(Stage* stage, FallBlock* fallBlock);
// �������s�������āA�ォ��l�߂�
void EraseLine(Stage* stage);
// ��ʕ`��
void DrawScreen(Stage* stage);
// �u���b�N��1����������
void MoveDownFallBlock(Stage* stage);
// �����u���b�N���Z�b�g�A�b�v
void SetupFallBlock(Stage* stage);
// �X�e�[�W������
void InitializeStage(Stage* stage);
// �����u���b�N�̎擾
FallBlock GetFallBlock(Stage* stage);
// �����u���b�N�̃Z�b�g
void SetFallBlock(Stage* stage, FallBlock* fallBlock);
// �Q�[���I�[�o��?
bool IsGameOver(Stage* stage);

// �������ɃC���N���[�h�K�[�h(�I��)���L�����Ă�������
#endif