// �ǂݍ��񂾐��������Z�i9999�����͂����Ƌ����I���j

#include <iostream>

using namespace std;

int main()
{
	
      int n;
	cout << "�ʐς�:";
	cin >> n;
	//cout << "9999�ŋ����I�����܂��B\n";

	
		
	for (int i = 1; i <= (n*2); i++) {
		
		//if (i * i > n) break;
		if ((n*2) % i != 0) continue;
		cout <<"0.5x" << i << "x" << ((n * 2) / i) << '\n';
	}
	


	;
}
