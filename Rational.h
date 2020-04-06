#include <iostream>
class Rational
{
private:
	int Licznik, Mianownik;
public:
	Rational(int A = 1, int B = 1)
	{
		Licznik = A;
		Mianownik = B;
	}
	//Przeci��enie operatora + za
	//pomoc� funkcji sk�adowej klasy
	Rational operator+(const Rational& U)const;
	friend std::ostream& operator<<(std::ostream& out, Rational& W);
	friend Rational operator- (const Rational&, const Rational&);
};
