//======================================
//	�^�[�����o�g�� �R�}���h����
//======================================
#include "CommandUI.h"
#include "TurnBattle.h" // DrawBattlScreen()
#include "Utility.h"  // GetKey()
#include <stdio.h>  // printf()
#include <stdlib.h>

const char* CommandName[] = {
	"��������",
	"�������",
	"�ɂ���",
};

// �v���[���̃R�}���h�擾
Command GetPlayerCommand(TurnBattle* btl)
{
	int cmd = 0;
	while (true) {
		DrawBattleScreen(btl);
		for (int i = 0; i < COMMAND_MAX; i++) {
			const char* cur = (i == cmd) ? "��" : "�@";
			printf("%s%s\n", cur, CommandName[i]);
		}
		switch (GetKey()) {
		case ARROW_UP:
			cmd--;
			if (cmd < 0) {
				cmd = COMMAND_MAX - 1;
			}
			break;
		case ARROW_DOWN:
			cmd++;
			if (cmd >= COMMAND_MAX) {
				cmd = 0;
			}
			break;
		case DECIDE:
			return (Command)cmd;
		}
	}
}
//�G�̃R�}���h�����_���Ŏ擾
int GetRandom(int min, int max) 
{
	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
// �G�̃R�}���h�擾
Command GetEnemyCommand()
{
	if (GetRandom(1, 10) == 10){
       return  COMMAND_SPELL;
}
	else{
        return COMMAND_FIGHT;
	}
	
}