#include<iostream>
using namespace std;

/*
1. По значению(by value);
2. По указателю(by pointer);
3. По ссылке(by reference);
*/

//Прототип (Объявление) функции - Function declaration:
void Exchange(int a, int b/*Принимаемые параметры*/);

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	Exchange(a, b/*передаем параметры в функцию*/);//Вызов функции (Function call)
	cout << a << "\t" << b << endl;
}

//Реализация (определение) функции - Function definition:
void Exchange(int a, int b/*Принимаемые параметры*/)
{
	int buffer = a;
	a = b;
	b = buffer;
}