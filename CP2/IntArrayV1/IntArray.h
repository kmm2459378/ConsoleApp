// 整数配列クラスIntArray（第１版）

#ifndef ___Class_IntArray
#define ___Class_IntArray

//===== 整数配列クラス ======//
class DoubleArray {
	int nelem ;		// 配列の要素数
	double* vec;		// 先頭要素へのポインタ

public:
	//--- コンストラクタ ---//
	DoubleArray(int size) : nelem(size) { vec = new double[nelem]; }

	//--- 要素数を返す ---//
	int size() const { return nelem; }

	//--- 添字演算子[] ---//
	double& operator[](int i) { return vec[i]; }
};

#endif
