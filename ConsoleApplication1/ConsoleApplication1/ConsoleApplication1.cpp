// Lab_02.cpp
// Кай Ярослав
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 7
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	double pi = 4 * atan(1.); // число пі
	cout << "a = "; cin >> x;
	z1 = cos(3. / 8 * pi - x / 4.)* cos(3. / 8 * pi - x / 4.)- cos(11. / 8 * pi + x / 4.)* cos(11. / 8 * pi + x / 4.);
	z2 = sqrt(2)/2.*sin(x/2.);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}