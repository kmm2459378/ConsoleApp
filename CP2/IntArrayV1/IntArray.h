// �����z��N���XIntArray�i��P�Łj

#ifndef ___Class_IntArray
#define ___Class_IntArray

//===== �����z��N���X ======//
class DoubleArray {
	int nelem ;		// �z��̗v�f��
	double* vec;		// �擪�v�f�ւ̃|�C���^

public:
	//--- �R���X�g���N�^ ---//
	DoubleArray(int size) : nelem(size) { vec = new double[nelem]; }

	//--- �v�f����Ԃ� ---//
	int size() const { return nelem; }

	//--- �Y�����Z�q[] ---//
	double& operator[](int i) { return vec[i]; }
};

#endif
