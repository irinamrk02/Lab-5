// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double Rad(double x)
{
	double a = (x * 180) / M_PI;
	return a;
}

int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите x (в радианах) ";
	cin >> x;
	double a = Rad(x);
	cout << "Число в градусах = " << a << endl;
	return 0;
}
