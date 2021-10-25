#include<iostream>
using namespace std;

void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);
int  Sum(int arr[], const unsigned int n);
double Avg(int arr[], const unsigned int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
}
void FillRand(int arr[], const unsigned int n)
{//Когда функция принимает массив, то при вызове в нее копируется адрес массива
	for (int i = 0; i < n; i++)
	{
		//а оператор [] вычисляет адрес элемента, и разыменовывает его
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int  Sum(int arr[], const unsigned int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const unsigned int n)
{
	return (double)Sum(arr, n) / n;
}