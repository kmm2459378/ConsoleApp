#pragma once
//======================================
//	�퍑�V�~�����[�V����  ��
//======================================
#ifndef __CASTLE_H
#define __CASTLE_H
#include "LordId.h"
#include "CastleId.h"

const int CONNECTED_SIZE = 10;

typedef struct {
    const char* name;    // ���O
    LordId owner;        // ���
    int troopCount;      // ����
    CastleId connectedList[CONNECTED_SIZE]; // �ڑ����ꂽ��̃��X�g
    int  curx, cury;     // �`��ʒu
    const char* mapName; // �}�b�v��̖��O
} Castle;

extern Castle castles[];

// ��̖��O���擾
const char* GetCastleName(Castle* castle) {
    return castle->name;
}
// ���ID���擾
LordId GetCastleOwner(Castle* castle) {
    return castle->owner;
}
// �������擾
int GetCastleTroopCount(Castle* castle) {
    return castle->troopCount;
}
// �ߗׂ̏郊�X�g���擾
CastleId* GetCastleConnectedList(Castle* castle) {
    return castle->connectedList;
}
// �`��X���W���擾
int GetCastleCurx(Castle* castle) {
    return castle->curx;
}
// �`��Y���W���擾
int GetCastleCury(Castle* castle) {
    return castle->cury;
}
// �}�b�v��̖��O���擾
const char* GetCastleMapName(Castle* castle) {
    return castle->mapName;
}
// ������������
void SetCastleTroopCount(Castle* castle, int troopCount) {
     castle->troopCount = troopCount;
}
// �����Z�b�g
void SetCastleOwner(Castle* castle, LordId owner) {
     castle->owner = owner;
}
// �����ɉ��Z����
void AddCastleTroopCount(Castle* castle, int add) {
    int value = castle->troopCount + add;
    if (value < 0) {
        value = 0;
    }
    else if (value > TROOP_MAX) {
        value = TROOP_MAX;
    }
}

#endif //  __CASTLE_H