// ‘fNXComplex

#ifndef ___Class_Complex
#define ___Class_Complex

#include <iostream>

//===== ‘fNX =====//
class Complex {
	double re;		// ΐ
	double im;		// 

public:
	Complex(double r = 0, double i = 0) : re(r), im(i) { }	 // RXgN^

	double real() const { return re; }		// ΐπΤ·
	double imag() const { return im; }		// πΤ·

	Complex operator+() const { return *this; }				 // P+Zq
	Complex operator-() const { return Complex(-re, -im); }	 // P-Zq

	//--- ‘γόZq+= ---//
	Complex& operator+=(const Complex& x) {
		re += x.re;
		im += x.im;
		return *this;
	}

	//--- ‘γόZq-= ---//
	Complex& operator-=(const Complex& x) {
		re -= x.re;
		im -= x.im;
		return *this;
	}

	//--- ΏZq== ---//
	friend bool operator==(const Complex& x, const Complex& y) {
		return x.re == y.re && x.im == y.im;
	}

	//--- ΏZq!= ---//
	friend bool operator!=(const Complex& x, const Complex& y) {
		return !(x == y);
	}

	//--- Q+ZqiComplex + Complexj---//
	friend Complex operator+(const Complex& x, const Complex& y) {
		return Complex(x.re + y.re, x.im + y.im);
	}

	//--- Q+Zqidouble + Complexj---//
	friend Complex operator+(double x, const Complex& y) {
		return Complex(x + y.re, y.im);
	}

	//--- Q+ZqiComplex + doublej---//
	friend Complex operator+(const Complex& x, double y) {
		return Complex(x.re + y, x.im);
	}
};

//--- oΝXg[sΙxπ}ό ---//
inline std::ostream& operator<<(std::ostream& s, const Complex& x)
{
	return s << '(' << x.real() << ", " << x.imag() << ')';
}

#endif
