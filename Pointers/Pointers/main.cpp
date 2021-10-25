//Pointer - это переменная, которая 
//содержит адрес другой переменной.
//Адрес - это число длиной 4 Байта,
//означающее порядковый номер Байта в ОЗУ.
#include<iostream>
using namespace std;

//#define - определить
//макроопределния типа ЧТО_ЗАМЕНИТЬ ЧЕМ_ЗАМЕНИТЬ
//#define PI 3.14
#define ULLINT unsigned long long int
#define delimiter "\n-------------------------------------\n"

//#ifdef	- #if defined
//#ifndef	- #if not defined
//#endif

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
//#if defined - ЕСЛИ ОПРЕДЕЛНО POINTERS_BASICS,
//то нижеследующий код, до директивы #endif 
//будет виден компилятору
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//Выводим значение переменной 'a'
	cout << &a << endl;	//Получаем адес переменной 'a' прямо при выводе
	cout << pa << endl;	//Выводим адрес переменной 'a' хранящийся в указателе 'pa'
	cout << &pa << endl;//Выводим адрес указателя 'pa'
						//(Получаем адрем указателя 'pa' прямо при выводе)
	cout << *pa << endl;
#endif // POINTERS_BASICS

#ifdef PI
	cout << delimiter << endl;
	cout << PI << endl;
#endif // PI

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
#endif
}
/*
--------------------------------------
& - Address-of operator - Оператор взятия адреса.
* - Dereference operator - Оператор разыменования.
--------------------------------------
*/

/*
--------------------------------------
+, -, ++, --
--------------------------------------
*/