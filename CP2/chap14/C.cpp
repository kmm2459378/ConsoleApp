// Column 14-1

class C {
public:
	explicit C()    { /* �c�����c */ }	// �f�t�H���g�R���X�g���N�^
	explicit C(int) { /* �c�����c */ }	// �ϊ��R���X�g���N�^�ł͂Ȃ�
	// ...
};

int main()
{
	C a; 						// �n�j
	C a1 = 1;					// �G���[: �Öق̕ϊ����Ȃ��B
	C a2 = C(1);				// �n�j
	C a3(1);					// �n�j
	C* p = new C(1);			// �n�j
	C a4 = (C)1;				// �n�j�i�L���X�g�j
	C a5 = static_cast<C>(1);	// �n�j�i�L���X�g�j
}