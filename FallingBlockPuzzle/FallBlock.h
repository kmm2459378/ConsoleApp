#pragma once
//======================================
//      �������o�Y�� �����u���b�N
//======================================
// �������ɃC���N���[�h�K�[�h(�J�n)���L�����Ă�������
//
#ifndef __FALL_BLOCK_H
#define __FALL_BLOCK_H
#include "BlockShape.h"

typedef struct {
	int x, y;         // Shape����̍��W
	BlockShape shape; // �`��
} FallBlock;

// �����u���b�N�̈ړ�
void MoveFallBlock(FallBlock* fallBlock, int ofsx, int ofsy);
// �����u���b�N�̉�]
void RotateFallBlock(FallBlock* fallBlock);
// �����_���ȗ����u���b�N���Z�b�g
void SetRandomFallBlock(FallBlock* fallBlock, int x, int y);
// �����u���b�N���v�����g
void PrintFallBlock(FallBlock* fallBlock);

// �������ɃC���N���[�h�K�[�h(�I��)���L�����Ă�������
#endif // !__FALL_BLOCK_H