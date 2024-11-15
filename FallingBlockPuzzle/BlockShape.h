#pragma once
//======================================
//      �������o�Y�� �u���b�N�`��
//======================================
// �������ɃC���N���[�h�K�[�h(�J�n)���L�����Ă�������
//
#ifndef __BLOCK_SHAPE_H
#define __BLOCK_SHAPE_H

const int SHAPE_WID_MAX = 4;
const int SHAPE_HEI_MAX = 4;

typedef struct {
	int size;
	bool pattern[SHAPE_HEI_MAX][SHAPE_WID_MAX];
} BlockShape;

extern const int blockShapesSize;

// shape�Z�b�g
void SetShape(BlockShape* shape, int idx);
// shape����](�����v���90�x)
void RotateShape(BlockShape* shape);
// shape�p�^�[����ݒ�
void SetShapePattern(BlockShape* shape, int x, int y, bool value);
// shape�p�^�[�����擾
bool GetShapePattern(BlockShape* shape, int x, int y);
// shape��\��
void PrintShape(BlockShape* shape);

// �������ɃC���N���[�h�K�[�h(�I��)���L�����Ă�������
#endif // !__BLOCK_SHAPE_H