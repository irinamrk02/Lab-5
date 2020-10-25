// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
using namespace std;

bool Prost (int a)
{
	if (a < 1)
		return false;
	for (int i = 2; i * i <= a; ++i)
	{
		if (a % i == 0)
		{
			return false;
		}
		return true;
	}
}

int main()
{
	setlocale(0, ""); 
	int a = 1;
	int b = 200;
	int c = 1;
	for (int i = a; i <= b; i++)
	{
		if (Prost(i))
		{
			if (i > c)
			cout << i << " ";
		}
	}
	return 0;
}

