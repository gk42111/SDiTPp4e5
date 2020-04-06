#include <iostream>
#include "Complex.h"
using namespace std;
int main() 
{
	Complex Ze1(2, 1);
	Complex Ze2(3, 4);
	cout << Module(Ze2) << endl;
	Complex wynik = operator/(Ze1, Ze2);
	cout << wynik << endl;
	system("pause");
	return 0;
}