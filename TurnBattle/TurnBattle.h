#pragma once
//======================================
//	�^�[�����o�g��
//======================================
// �������ɃC���N���[�h�K�[�h(�J�n)���L�����Ă��������B
#ifndef __TURNBATTLE_H
#define __TURNBATTLE_H
#include "Character.h"
#include "Command.h"
//�L�����N�^�[�̖��O�̐ݒ�  = �I�u�W�F�N�g
typedef struct {
	Character* player;
	Character* bossenemy;
	int turn;
} TurnBattle;

// �o�g���ݒ�
void SetTurnBattle(TurnBattle* btl, Character* player, Character* bossenemy);

// �C���g���u�`�����ꂽ!!�v�\��
void IntroTurnBattle(TurnBattle* btl);
// �o�g���J�n
void StartTurnBattle(TurnBattle* btl);
// �o�g����ʂ�`��
void DrawBattleScreen(TurnBattle* btl);
// �v���[���̃^�[�����s(�I���t���O��Ԃ�)
bool ExecPlayerTurn(TurnBattle* btl, Command cmd);
// �G�̃^�[�����s(�I���t���O��Ԃ�)
bool ExecEnemyTurn(TurnBattle* btl, Command cmd);
// ���̃^�[��
void NextTurnBattle(TurnBattle* btl);

// �������ɃC���N���[�h�K�[�h(�I��)���L�����Ă��������B
#endif 
