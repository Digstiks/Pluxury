// Task 1-3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include<cmath>
using namespace std;

double getPressure(const int g, const double Weight,
    const double Area)
    {
    return (Weight * g) / Area;
    }

int main()
{
    setlocale(LC_ALL, "ru");
    float g=9.81;
    double Weight;
    cout << "Введите массу бетонной плиты" << endl;
    cin >> Weight;
    double Area;
    cout << "Введите площадь опоры" << endl;
    cin >> Area;
    cout << "Давление: ";
    double Pressure = getPressure(g, Weight, Area); 
    cout << Pressure;
    return 0;
}

