// üŒ`’Tõi‘æ‚P”Åj

#include <iostream>

using namespace std;

//--- ”z—ña‚Ìæ“ªnŒÂ‚Ì—v‘f‚©‚ç’lkey‚ğüŒ`’Tõi‘æ‚P”Åj---//
int seq_search(int* a, int n, int key)
{
	for (int i = 0; i < n; i++)
		if (a[i] == key)		// ’Tõ¬Œ÷
			return i;
	return -1;					// ’Tõ¸”s
}

int main(void)
{
	int key, idx;
	int x[8];
	int x_size = sizeof(x) / sizeof(x[0]);		// ”z—ñx‚Ì—v‘f”

	for (int i = 0; i < x_size; i++) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}
	cout << "’T‚·’l‚ÍF";
	cin >> key;

	idx = seq_search(x, x_size, key);
	if(idx != -1)
		cout << "‚»‚Ì’l‚ğ‚à‚Â—v‘f‚Íx[" << idx << "]‚Å‚·B\n";
	else
		cout << "Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B\n";
}
