#pragma once
//======================================
//	�R�}���hUI
//======================================
// �������ɃC���N���[�h�K�[�h(�J�n)���L�����Ă��������B
#ifndef __COMMAND_UI_H
#define __COMMAND_UI_H
#include "Command.h"
#include "TurnBattle.h"

// �v���[���̃R�}���h�擾
Command GetPlayerCommand(TurnBattle* btl);
// �G�̃R�}���h�擾
Command GetEnemyCommand();

// �������ɃC���N���[�h�K�[�h(�I��)���L�����Ă��������B
#endif