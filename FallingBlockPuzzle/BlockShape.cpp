//======================================
//      �������o�Y�� �u���b�N�`��
//======================================
#include "BlockShape.h"
#include <stdio.h>
// �֐��v���g�^�C�v
static bool isInShapePattern(int x, int y);

// �`��e�[�u��
const BlockShape blockShapes[] = {
	{   // I���^
		4,
		{
			{0,1,0,0},
			{0,1,0,0},
			{0,1,0,0},
			{0,1,0,0},
		}
	},
	{   // L���^
		3,
		{
			{0,1,0},
			{0,1,0},
			{0,1,1},
		}
	},
	{   // T���^
		3,
		{
			{0,0,0},
			{1,1,1},
			{0,1,0},
		}
	},
	{   // O���^
		3,
		{
			{0,0,0},
			{0,1,1},
			{0,1,1},
		}
	},
	{   // 2���^
		3,
		{
			{0,0,0},
			{1,1,0},
			{0,1,1},
		}
	},
	{   // S���^
		3,
		{
			{0,0,0},
			{0,1,1},
			{1,1,0},
		}
	},
	{   // �tL���^
		3,
		{
			{0,1,1},
			{0,1,0},
			{0,1,0},
		}
	},
};
const int blockShapesSize = sizeof(blockShapes) / sizeof(blockShapes[0]);
// �`����Z�b�g����
void SetShape(BlockShape* shape, int idx)
{
	if (0 <= idx && idx < blockShapesSize) {
		*shape = blockShapes[idx];
	}
}
// �`�����]����
void RotateShape(BlockShape* shape)
{
	// ���v���
	//  x         X=size-1-y
	// +-----+    +-----+
	//y|0,1,2|    |6,3,0|Y=x
	// |3,4,5| => |7,4,1|
	// |6,7,8|    |8.5.2|
	// +-----+    +-----+
	//�@�������v���
	//  x         X=y
	// +-----+    +-----+
	//y|0,1,2|    |2,5,8|Y=size-1-x
	// |3,4,5| => |1,4,7|
	// |6,7,8|    |0.3.6|
	// +-----+    +-----+
	//
	BlockShape work = *shape;
	//
	// ���������R�[�f�B���O���Ă�������
	// shape�𑖍����܂�(x,y)
	// �����v���̉�] work��(x,y)�� shape��(y,size-1-x)�փR�s�[���܂�
	//
	for (int y = 0; y < shape->size; y++)
	{
		for (int x = 0; x < shape->size; x++)
		{
			bool f = GetShapePattern(&work, x, y);
			SetShapePattern(shape, y, shape->size - 1 - x, f);
		}
	}
}
// �w��ʒu�̃p�^�[���Z�b�g
void SetShapePattern(BlockShape* shape, int x, int y, bool value)
{
	//
	// ���������R�[�f�B���O���Ă�������
	// isInShapePattern()���m�F���āAshape��pqttern��(x,y)��value���������݂܂�
	// isInShapePattern()�O�Ȃ�A�Ȃɂ����܂���
	//
	if (isInShapePattern(x, y))
	{
		shape->pattern[y][x] = value;
	}
}
// �w��ʒu�̃p�^�[���擾
bool GetShapePattern(BlockShape* shape, int x, int y)
{
	//
	// ���������R�[�f�B���O���Ă�������
	// isInShapePattern()���m�F���āAshape��pqttern��(x,y)�̒l��Ԃ��܂�
	// isInShapePattern()�O�Ȃ�Afalse��Ԃ��܂�
	//
	if (isInShapePattern(x, y))
	{
		return shape->pattern[y][x];
	}
	return false;
}
// ���W���p�^�[������?
static bool isInShapePattern(int x, int y)
{
	return 0 <= x && x < SHAPE_WID_MAX
		&& 0 <= y && y < SHAPE_HEI_MAX;
}

void PrintShape(BlockShape* shape)
{
	for (int y = 0; y < shape->size; y++) {
		for (int x = 0; x < shape->size; x++) {
			printf("%s", GetShapePattern(shape, x, y) ? "��" : "�E");
		}
		putchar('\n');
	}
}