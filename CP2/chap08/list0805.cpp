// ���O��q�˂Ĉ��A�i������̓Ǎ��݂ƕ\���j

#include <iostream>

using namespace std;

int main()
{
	char name[36];

	cout << "�����O�́F";
	/*cin >> name;*/
	cin.getline(name, 36, '\n');

	cout << "����ɂ��́A" << name << "����!!\n";
}
