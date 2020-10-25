// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

double Km (double x)
{
	double a = x * 1.609;
	return a;
}
double Ft(double x)
{
	double b = x * 5280.002;
	return b;
}

int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите x (в милях) ";
	cin >> x;
	double a = Km(x);
	double b = Ft(x);
	cout << a << " км" << endl;
	cout << b << " фт" << endl;
	return 0;
}

