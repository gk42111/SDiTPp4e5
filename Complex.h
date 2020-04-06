#pragma once
#include <iostream>
using namespace std;
class Complex
{
private:
	double Re, Im;
public:
	Complex(){}
	Complex(double inRe, double inIm):Re(inRe),Im(inIm){}
	void operator-();

	friend std::ostream& operator<<(std::ostream& out, Complex& W);
	friend Complex operator+(const Complex&, const Complex&);
	friend Complex operator*(const Complex&, const Complex&);
	friend Complex operator-(const Complex&, const Complex&);
	friend Complex operator/(const Complex&, const Complex&);
	friend double Module(Complex&);

};

