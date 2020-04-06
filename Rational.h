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
	//Przeci¹¿enie operatora + za
	//pomoc¹ funkcji sk³adowej klasy
	Rational operator+(const Rational& U)const;
	friend std::ostream& operator<<(std::ostream& out, Rational& W);
	friend Rational operator- (const Rational&, const Rational&);
};
