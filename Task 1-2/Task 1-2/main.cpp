

#include <iostream>
#include<cmath>
using namespace std;
double getDistance(const double x1, const double y1,
    const double x2, const double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); /*������� ���������� ����������*/
}
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "������� ���������� ����� �" << endl; /*������� ���� ������������� ��������� ����� �*/
    double x1, y1;
    cin >> x1 >> y1;
    cout << "������� ���������� ����� B" << endl; /*������� ���� ������������� ��������� ����� B*/
    double x2, y2;
    cin >> x2 >> y2;
    cout << "���������� ����� �������: ";
    double distance = getDistance(x1, y1, x2, y2); /*����� �������*/
    cout << distance;
    return 0;
}