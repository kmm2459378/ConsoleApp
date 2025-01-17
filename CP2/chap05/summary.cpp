#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	const int A_SIZE = 5;		// zρaΜvf

	// zρaΖbΝP³zρivf^ΝintΕvfΝ5j
	int a[A_SIZE];
	int b[] = {1, 2, 3, 4, 5};

	// zρbΜvf
	int b_size = sizeof(b) / sizeof(b[0]);

	// zρbΜSvfπaΙRs[
	for (int i = 0; i < A_SIZE; i++)
		a[i] = b[i];

	// zρaΜSvfΜlπ\¦
	for (int i = 0; i < A_SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	// zρbΜSvfΜlπ\¦
	for (int i = 0; i < b_size; i++)
		cout << "b[" << i << "] = " << b[i] << '\n';

	// zρaΜSvfΜvπsumΙίΔ\¦
	int sum = 0;
	for (int i = 0; i < A_SIZE; i++)
		sum += a[i];
	cout << "zρaΜSvfΜv" << sum << '\n'; 

	// zρcΝQ³zρivf^Νint[3]ΕvfΝ2j
	int c[2][3] = { {1, 2, 3},
					{4, 5, 6},
				  };

	int c_height = sizeof(c) / sizeof(c[0]);		// s
	int c_width  = sizeof(c[0]) / sizeof(c[0][0]);	// ρ

	cout << "zρcΝ" << c_height << "s" << c_width << "ρΜ"
		 << "Q³zρΕ·B\n";

	// zρcΜS\¬vfΜlπ\¦
	for (int i = 0; i < c_height; i++) {
		for (int j = 0; j < c_width; j++) {
			cout << "c[" << i << "][" << j << "] = " << c[i][j] << '\n';
		}
	}

	// zρΖvfΖ\¬vfΜ^π\¦
	cout << "zρaΜ^F" << typeid(a).name()    << '\n';
	cout << "aΜvf^F" << typeid(a[0]).name() << '\n';
	cout << "zρbΜ^F" << typeid(b).name()    << '\n';
	cout << "bΜvf^F" << typeid(b[0]).name() << '\n';
	cout << "zρcΜ^F" << typeid(c).name()    << '\n';
	cout << "cΜvf^F" << typeid(c[0]).name() << '\n';
	cout << "cΜ\¬vf^F" << typeid(c[0][0]).name() << '\n';
}
