//========================================
//      ���C�t�Q�[��:�p�^�[��
//========================================
#include "Pattern.h"
#include "Utility.h"
#include <stdio.h>

static bool _block[4][4] = {
	{0,0,0,0},
	{0,1,1,0},
	{0,1,1,0},
	{0,0,0,0},
};
static bool _tab[5][5] = {
	{0,0,0,0,0},
	{0,0,1,0,0},
	{0,1,0,1,0},
	{0,0,1,0,0},
	{0,0,0,0,0},
};
static bool _boat[5][5] = {
	{0,0,0,0,0},
	{0,1,1,0,0},
	{0,1,0,1,0},
	{0,0,1,0,0},
	{0,0,0,0,0},
};
static bool _snake[4][6] = {
	{0,0,0,0,0,0},
	{0,1,1,0,1,0},
	{0,1,0,1,1,0},
	{0,0,0,0,0,0},
};

static bool _ship[5][5] = {
	{0,0,0,0,0},
	{0,1,1,0,0},
	{0,1,0,1,0},
	{0,0,1,1,0},
	{0,0,0,0,0},
};

static bool _aircarrier[5][6] = {
	{0,0,0,0,0,0},
	{0,1,1,0,0,0},
	{0,1,0,0,1,0},
	{0,0,0,1,1,0},
	{0,0,0,0,0,0},
};
static bool _beehive[5][6] = {
	{0,0,0,0,0,0},
	{0,0,1,1,0,0},
	{0,1,0,0,1,0},
	{0,0,1,1,0,0},
	{0,0,0,0,0,0},
};

static bool _barge[6][6] = {
	{0,0,0,0,0,0},
	{0,0,1,0,0,0},
	{0,1,0,1,0,0},
	{0,0,1,0,1,0},
	{0,0,0,1,0,0},
	{0,0,0,0,0,0},
};
static bool _pond[6][6] = {
	{0,0,0,0,0,0},
	{0,0,1,1,0,0},
	{0,1,0,0,1,0},
	{0,1,0,0,1,0},
	{0,0,1,1,0,0},
	{0,0,0,0,0,0},
};

//static bool _blinker[5][5] = {
//};
//static bool _frog[6][6] = {
//};
//static bool _beecon[6][6] = {
//};
//static bool _clock[6][6] = {
//};
//static bool _pulsar[17][17] = {
//};
//static bool _octagon [10][10] = {
//};
//static bool _galaxy[15][15] = {
//};
//static bool _pentadecathlon[18][11] = {
//};
//static bool _r_pentomono[5][5] = {
// };
//static bool _diehard[5][10] = {
//};
//static bool _acorn[5][9] = {
//};
//static bool _glider[6][6] = {
//};
//static bool _lightship[7][9] = {
//};
//static bool _midship[9][10] = {
//};
//static bool _largeship[9][11] = {
//};
//static bool _griderGun1[11][38] = {
//};
//static bool _griderGun2[23][35] = {
//};
//static bool _breeding_10cell[8][10] = {
//};
//static bool _breeding_5x5[7][7] = {
//};
//static bool _breeding_12x2[4][14] = {
//};
//static bool _breeding_h1[3][41] = {
//};
//static bool _shushupopo[20][7] = {
//};
//static bool _max[29][29] = {
//};

static Pattern patterns[] = {
	// �y�Œ蕨�́z
	{4,4,(bool*)_block,"�u���b�N",true},
	{5,5,(bool*)_tab,"�^�u",true},
	{5,5,(bool*)_boat,"�{�[�g",true},
	{6,4,(bool*)_snake,"�ւ�",true},
	{5,5,(bool*)_ship,"�D",true},
	{6,5,(bool*)_aircarrier,"���",true},
	{6,5,(bool*)_beehive,"�I�̑�",true},
	{6,6,(bool*)_barge,"�͂���",true},
	{6,6,(bool*)_pond,"�r",true},
	// �y�U���q�z
//	{5,5,(bool*)_blinker,"�u�����J�[",true},
//	{6,6,(bool*)_frog,"�q�L�K�G��",true},
//	{6,6,(bool*)_beecon,"�r�[�R��",true},
//	{6,6,(bool*)_clock,"���v",true},
//	{17,17,(bool*)_pulsar,"�p���T�[",true},
//	{10,10,(bool*)_octagon,"���p�`",true},
//	{15,15,(bool*)_galaxy,"���",true},
	// �y�����^�z
//	{11,18,(bool*)_pentadecathlon,"�y���^�f�J�X����",true},
//	{5,5,(bool*)_r_pentomono,"R�y���g�~�m",true},
//	{10,5,(bool*)_diehard,"�_�C�E�n�[�h" ,true},
//	{9,5,(bool*)_acorn,"�ǂ񂮂�",true},
	// �y�ړ����́z
//	{6,6,(bool*)_glider,"�O���C�_�[",true},
//	{9,7,(bool*)_lightship,"�y�ʋ��F���D",true},
//	{10,9,(bool*)_midship,"���ʋ��F���D",true},
//	{11,9,(bool*)_largeship,"�d�ʋ��F���D",true},
	// �y�ɐB�^�z
//	{38,11,(bool*)_griderGun1,"�S�X�p�[�̃O���C�_�[�e",false},  // ���[�v�Ȃ�
//	{35,23,(bool*)_griderGun2,"�V���L���̃O���C�_�[�e",false},  // ���[�v�Ȃ�
//	{10,8,(bool*)_breeding_10cell,"�ɐB�^10�Z��",true},
//	{7,7,(bool*)_breeding_5x5,"�ɐB�^5x5�̋�`",true},
//	{14,4,(bool*)_breeding_12x2,"�ɐB�^12x2�̋�`",true},
//	{41,3,(bool*)_breeding_h1,"�ɐB�^����1",true},
//	{7,20,(bool*)_shushupopo,"�V���V���|�b�|",false},
//	{29,29,(bool*)_max,"�}�b�N�X",false},
};

const int patternSize = sizeof(patterns) / sizeof(patterns[0]);
static int sel = 0;

Pattern* SelectPattern()
{
	while (true) {
		ClearScreen();
		for (int i = 0; i < patternSize; i++) {
			const char* cur = (sel == i) ? "��" : "�@";
			printf("%s%s\n", cur, patterns[i].name);
		}
		switch (GetKey()) {
		case ARROW_UP:
			sel--;
			if (sel < 0) {
				sel = patternSize - 1;
			}
			break;
		case ARROW_DOWN:
			sel++;
			if (sel >= patternSize) {
				sel = 0;
			}
			break;
		case DECIDE:
			return &patterns[sel];
		case ESC:
			return nullptr;
		}
	}
}