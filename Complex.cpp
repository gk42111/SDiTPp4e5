#include "Complex.h"
#include <cmath>

std::ostream & operator<<(std::ostream & out, Complex & W)
{
	out << W.Re << "+" << W.Im << "i";
	return out;
}

Complex operator+(const Complex&c1, const Complex &c2)
{
	Complex Wynik;
	Wynik.Re = c1.Re + c2.Re;
	Wynik.Im = c1.Im + c2.Im;
	return Wynik;
}

Complex operator*(const Complex & C1, const Complex & C2)
{
	Complex Wynik;
	Wynik.Re = (C1.Re*C2.Re) - (C1.Im*C2.Im);
	Wynik.Im = (C1.Re*C2.Im) - (C1.Im*C2.Re);
	return Wynik;
}

Complex operator-(const Complex &c1, const Complex &c2)
{
	Complex Wynik;
	Wynik.Re = c1.Re - c2.Re;
	Wynik.Im = c1.Im - c2.Im;
	return Wynik;
}

Complex operator/(const Complex &c1, const Complex &c2)
{
	Complex Wynik;
	Wynik.Re = ((c1.Re*c2.Re) - (c1.Im*c2.Im))/(((pow(c2.Re,2)))+ ((pow(c2.Im, 2))));
	Wynik.Im = ((c1.Re*c2.Im) - (c1.Im*c2.Re))/(((pow(c2.Re, 2))) + ((pow(c2.Im, 2))));
	return Wynik;
}

double Module(Complex &C)
{
	double Wynik;
	Wynik = sqrt(C.Im*C.Im + C.Re*C.Re);
	return Wynik;
}



void Complex::operator-()
{
	Im = Im * (-1);
}
