// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double Square(double R)
{
	double S = M_PI * pow(R,2);
	return S;
}

int main()
{
	setlocale(0, "");
	double R;
	cout << "Введите R: ";
	cin >> R;
	double S = Square(R);
	cout << "Число в градусах = " << S << endl;
	return 0;
}
