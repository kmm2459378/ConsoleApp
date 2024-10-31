// ���t�N���XDate�i��Q�ŁF�\�[�X���j

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

//--- Date�̃f�t�H���g�R���X�g���N�^�i�����̓��t�ɐݒ�j---//
Date::Date()
{
    time_t current = time(NULL);                // ���݂̗�����擾
    //struct tm* local = localtime(&current);       // �v�f�ʂ̎����ɕϊ�
    struct tm local;                            // �v�f�ʂ̎����ɕϊ�
    localtime_s(&local, &current);

    //y = local->tm_year + 1900;        // �N�Ftm_year�͐���N-1900
    //m = local->tm_mon + 1;            // ���Ftm_mon��0�`11
    //d = local->tm_mday;               // ��
    y = local.tm_year + 1900;       // �N�Ftm_year�͐���N-1900
    m = local.tm_mon + 1;           // ���Ftm_mon��0�`11
    d = local.tm_mday;              // ��
}

//--- Date�̃R���X�g���N�^�i�w�肳�ꂽ�N�����ɐݒ�j---//
Date::Date(int yy, int mm, int dd)
{
    y = yy;
    m = mm;
    d = dd;
}

//--- �O���̓��t��ԋp�i�[�N�ɔ�Ή��j---//
Date Date::preceding_day() const
{
    int dmax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    Date temp = *this;      // ����̓��t

    if (temp.d > 1)
        temp.d--;
    else {
        if (--temp.m < 1) {
            temp.y--;
            temp.m = 12;
        }
        temp.d = dmax[temp.m - 1];
    }
    return temp;
}


Date Date::following_day() const
{
    int dmax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    Date temp = *this;      // ����̓��t

    if (temp.d < dmax[temp.m -1])
        temp.d++;
    else {
        if (++temp.m > 12) {
            temp.y++;
            temp.m = 1;
        }
        temp.d = 1;
    }
    return temp;
}

//--- ������\����ԋp ---//
string Date::to_string() const
{
    ostringstream s;
    s << y << "�N" << m << "��" << d << "��";
    return s.str();
}

//--- �o�̓X�g���[��s��x��}�� ---//
ostream& operator<<(ostream& s, const Date& x)
{
    return s << x.to_string();
}