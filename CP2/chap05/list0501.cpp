// �T�l�̓_����ǂݍ���ō��v�_�E���ϓ_��\��

#include <iostream>

using namespace std;

int main()
{
	int yamane, takada, kawakami, saegusa, tozuka, ore, oreo,oragon;	// �_��
	int sum = 0;		// ���v
	cout << "5�l�̓_���̍��v�_�ƕ��ϓ_�����߂܂��B\n";
	cout << "1�Ԃ̓_���F";   cin >> yamane;    sum += yamane;
	cout << "2�Ԃ̓_���F";   cin >> takada;    sum += takada;
	cout << "3�Ԃ̓_���F";   cin >> kawakami;  sum += kawakami;
	cout << "4�Ԃ̓_���F";   cin >> saegusa;   sum += saegusa;
	cout << "5�Ԃ̓_���F";   cin >> tozuka;    sum += tozuka;
	cout << "6�Ԃ̓_���F";   cin >> ore;   sum += ore;
	cout << "7�Ԃ̓_���F";   cin >> oreo;   sum += oreo;
	cout << "7�Ԃ̓_���F";   cin >> oragon;   sum += oragon;
	cout << "���v��" << sum << "�_�ł��B\n";
	cout << "���ς�" << static_cast<double>(sum) / 8 << "�_�ł��B\n";
}
