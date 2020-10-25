// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

double Arifm(double a, double b, double c)
{
    double x = (a + b + c) / 3;
    return x;
}

int main()
{
	setlocale(0, "");
	double a;
	double b;
	double c;
	cout << "Введите числа a, b и c: ";
	cin >> a >> b >> c;
	double x = Arifm(a, b, c);
	cout << "Среднее арифметичесткое 3-х чисел = " << x << endl;
	return 0;
}
