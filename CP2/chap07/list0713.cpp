// n�s3��̂Q�����z����󂯎�鉼�����̌^��typeid���Z�q�ɂ���ĕ\��

#include <iostream>
#include <typeinfo>

using namespace std;

//---�gint��v�f�^�Ƃ���v�f��3�̔z��h��v�f�^�Ƃ���z�� ---//
void func(int a[][3])
{
	cout << "������a�̌^�F" << typeid(a).name() << '\n';
}

int main(void)
{
	int x[2][3];   // int[3]��v�f�^�Ƃ���v�f��2�̔z��
	int y[4][3];   // int[3]��v�f�^�Ƃ���v�f��4�̔z��

	cout << "������x�̌^�F" << typeid(x).name() << '\n';
	func(x);

	cout << "������y�̌^�F" << typeid(y).name() << '\n';
	func(y);
}
