//======================================
//	�u���b�N������ �X�e�[�W
//======================================
#include "Stage.h"
#include "Utility.h"
#include <stdio.h>

// �֐��v���g�^�C�v
static void InitPaddle(Stage* stage);
static void InitField(Stage* stage);
static void SetField(Stage* stage, int x, int y, Field value);
static bool IsInField(int x, int y);
static bool IsBallPosition(Stage* stage, int x, int y);
static bool IsPaddlePosition(Stage* stage, int x, int y);
static void DrawHorizontalWall();

const char* AA_WALL = "��";
const char* AA_BALL = "��";
const char* AA_PADDLE = "��";
const char* AA_BLOCK = "��";
const char* AA_NONE = "�@";

// �X�e�[�W������
void InitializeStage(Stage* stage)
{
	ResetBall(stage);
	InitPaddle(stage);
	InitField(stage);
}
// �p�h���̏�����
static void InitPaddle(Stage* stage)
{
	// ���������R�[�f�B���O���Ă��������B
	// �p�h���̈ʒu��Y�͉��[����3��AX�͉����̒����ɂȂ�悤�ɐݒ肵�܂�
}
// �t�B�[���h�̏�����
static void InitField(Stage* stage)
{
	// ���������R�[�f�B���O���Ă��������B
	// �t�B�[���h�̏㕔1/4 ���u���b�N�Ŗ��߂Ă��������B
	// ����ȊO�͋�Ԃł��B
}
// �{�[���̏�����(���Z�b�g)
void ResetBall(Stage* stage)
{
	// ���������R�[�f�B���O���Ă��������B
	// �{�[���̈ʒu�AY���t�C�[���h������1/3�AX�������_���l�ɂ��܂�
	// �{�[���̑��x�AY�͉�(1)�ցAX�͗����ō�(-1)�܂��͉E(1)�ɂ��܂�
}
void DrawScreen(Stage* stage, DrawMode mode)
{
	ClearScreen();
	DrawHorizontalWall();
	for (int y = 0; y <= FIELD_HEIGHT; y++) {
		printf(AA_WALL);
		for (int x = 0; x < FIELD_WIDTH; x++) {
			// ���������R�[�f�B���O���Ă�������
			// (x,y)���{�[���̈ʒu�Ȃ�AAA_BALL��`�悵�܂�
			// (x,y)���p�h���̈ʒu�Ȃ�AAA_PADDLE��`�悵�܂�
			// (x,y)�̃t�B�[���h���u���b�N�Ȃ� AA_BLOCK���A��ԂȂ�AA_SPACE��`�悵�܂�
		}
		printf(AA_WALL);
		putchar('\n');
	}
	DrawHorizontalWall();

	const char* msg = nullptr;
	int len;
	switch (mode) {
	case DM_PAUSE: msg = "�o�`�t�r�d"; len = 5; break;
	case DM_READY: msg = "�q�d�`�c�x"; len = 5; break;
	case DM_CLEAR: msg = "�r�s�`�f�d�@�b�k�d�`�q"; len = 11; break;
	}
	if (msg != nullptr) {
		const int SCREEN_WIDTH = FIELD_WIDTH + 2;
		const int SCREEN_HEIGHT = FIELD_HEIGHT + 2;
		SaveCursor();
		// ���������R�[�f�B���O���Ă��������B
		// ���b�Z�[�W���X�N���[���̈�̐^�񒆂ɕ\�����܂��B
		RestoreCursor();
	}
}
// �{�[���ʒu��?
static bool IsBallPosition(Stage* stage, int x, int y)
{
	// ���������R�[�f�B���O���Ă�������
	// (x,y)���{�[���ʒu�����肵�Đ^�U��Ԃ��܂�
}
// �p�h���̈ʒu��?
static bool IsPaddlePosition(Stage* stage, int x, int y)
{
	// ���������R�[�f�B���O���Ă�������
	// (x,y)���p�h���ɏd�Ȃ��Ă��邩���肵�Đ^�U��Ԃ��܂�
}
// �����ǂ̕`��
static void DrawHorizontalWall()
{
	// ���������R�[�f�B���O���Ă�������
	// �X�N���[���̈�̏㉺�ɉ����̕ǂ�`�悵�܂��B
}
// �{�[���̈ړ�
void MoveBall(Stage* stage)
{
	stage->ballX += stage->ballVelocityX;
	stage->ballY += stage->ballVelocityY;

	// �{�[�����[�ɂ���Ȃ瑬�x���]
	if (stage->ballX <= 0) {
		stage->ballVelocityX = 1;
	}
	else if (stage->ballX >= FIELD_WIDTH - 1) {
		stage->ballVelocityX = -1;
	}
	if (stage->ballY <= 0) {
		stage->ballVelocityY = 1;
	}
	else if (stage->ballY >= FIELD_HEIGHT - 1) {
		stage->ballVelocityY = -1;
	}
	// �{�[�����n�h���ɓ��������甽��
	if (stage->ballY == stage->paddleY - 1) {
		if (stage->ballX >= stage->paddleX - 1
			&& stage->ballX <= stage->paddleX + PADDLE_WIDTH + 1) {
			stage->ballVelocityX = (stage->ballX < stage->paddleX + PADDLE_WIDTH / 2) ? -1 : 1;
			stage->ballVelocityY = -1;
		}
	}
	// �{�[���̏�3�R�}�̃u���b�N������
	for (int x = stage->ballX - 1; x <= stage->ballX + 1; x++) {
		int y = stage->ballY - 1;
		if (GetField(stage, x, y) == FIELD_BLOCK) {
			SetField(stage, x, y, FIELD_NONE);
			stage->ballVelocityY = 1;
		}
	}
}
// �{�[���𗎂Ƃ��Ă��܂���?
bool IsBallMiss(Stage* stage)
{
	// ���������R�[�f�B���O���Ă�������
	// �{�[����Y���W���A�t�B�[���h�ŉ��ɒB�������Ő^�U��Ԃ��܂�
}
// �ʃN���A?
bool IsClear(Stage* stage)
{
	// ���������R�[�f�B���O���Ă�������
	// �t�B�[���h�𑖍����āA�u���b�N���������Ƃ��m�F���Đ^�U��Ԃ��܂�
}
// �p�h���ړ�
void MovePaddle(Stage* stage, int addX)
{
	// ���������R�[�f�B���O���Ă�������
	// �p�h����X���W�� addX�����Z���܂�
	// �p�h�����t�B�[���h�����͂ݏo���Ȃ��悤�ɂ��܂��B
}
// �t�B�[���h�̃Z�b�^�[
static void SetField(Stage* stage, int x, int y, Field value)
{
	// ���������R�[�f�B���O���Ă�������
	// (x,y)���t�B�[���h�����m�F���āAvalue�������܂�
}
static Field GetField(Stage* stage, int x, int y)
{
	// ���������R�[�f�B���O���Ă�������
	// (x,y)���t�B�[���h�����m�F���āA�l��Ԃ��܂�
	// �t�B�[���h���łȂ��΁AFIELD_OUT��Ԃ��܂�
}
// �t�B�[���h����?
static bool IsInField(int x, int y)
{
	// ���������R�[�f�B���O���Ă�������
	// (x,y)���t�B�[���h�������肵�āA�^�U��Ԃ��܂�
}
