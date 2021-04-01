﻿#include <iostream>
#include <math.h>

using namespace std;

double GetA(const double x, const double y, const double z);
double GetB(const double x, const double y, const double z);

int main()
{
	const auto x = 0.61;
	const auto y = 3.4;
	const auto z = 16.5; /*Ввели константы x,y,z*/

	const auto a = GetA(x, y, z);
	const auto b = GetB(x, y, z);

	cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';
	cout << "a = " << a << ", b = " << b << endl;
	return 0;

}

double GetA(const double x, const double y, const double z)
{
	return (pow(x, 3) * pow(tan((x + y) * (x + y)), 2) + z / sqrt(x + y)); /*функция, по которой мы получаем А*/
}

double GetB(const double x, const double y, const double z) /*Функция, по которой мы получаем B*/
{
	return ((y * pow(x, 2) - z) / (exp(z * x) - 1));
}