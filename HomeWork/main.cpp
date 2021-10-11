#include <iostream>
#include<Windows.h>
using namespace std;

int stringlength(char str[])
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}
void to_upper(char str[])
{
	for (size_t i = 0; str[i]; i++)
		str[i] += 32;
}
bool is_palindrome(char str[])   //Проверяет, является ли строка палиндромом (ого, или, 12321)
{
	int y = stringlength(str) - 1;
	for (int i = 0, j = y; i <= y && j >= 0; i++, j--)
	{
		if (str[i] != str[j])
		{
			return false;
			cout << "Hello";
		}
		return true;
	}
}
bool is_int_number(char str[])	//Проверяет, является ли строка целым десятичным числом
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return false;
	}
	return true;
}
int  to_int_number(char str[])	//Если строка - десятичное число, то функция возвращает его int-овое значение.
{
	int rez = 0;
	if (is_int_number(str))
	{
		for (size_t i = 0; str[i]; i++)
			rez = rez * 10 + str[i] - '0';
	}
	return rez;
	/*return str;*/
}
bool is_bin_number(char str[])  //Проверяет, является ли строка двоичным числом
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!(str[i] == '0' || str[i] == '1'))
			return false;
	}
	return true;
}
int Stepen(int x, int y)
{
	int res = 1;
	for (int i = 1; i <= y; i++)
		res *= x;
	return res;
}
int  bin_to_dec(char str[])	//Если строка - двоичное число, то функция возвращает его десятичное значение.
{
	int rez = 0;
	if (is_bin_number(str))
	{
		for (size_t i = stringlength(str); i > 0; i--)
			rez += (str[i - 1] - '0') * Stepen(2, (stringlength(str) - i));
		return rez;
	}
}
bool is_hex_number(char str[]) //Проверяет, является ли строка шестнадцатеричным числом
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!((str[i] >= '1' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') && 'h'))
			return false;
	}
	return true;
}
int  hex_to_dec(char str[])	//Если строка - шестнадцатеричное число, то функция возвращает его десятичное значение.
{
	int rez = 0;
	int k;
	for (size_t i = 0; str[i]; i++)
	{
		switch (toupper(str[i]))
		{
		case 'A': k = 10; break;
		case 'B': k = 11; break;
		case 'C': k = 12; break;
		case 'D': k = 13; break;
		case 'E': k = 14; break;
		case 'F': k = 15; break;
		case '1': k = 1; break;
		case '2': k = 2; break;
		case '3': k = 3; break;
		case '4': k = 4; break;
		case '5': k = 5; break;
		case '6': k = 6; break;
		case '7': k = 7; break;
		case '8': k = 8; break;
		case '9': k = 9; break;
		case '0': k = 0; break;
		}
		rez += k * Stepen(16, (stringlength(str) - 1 - i));
	}
	return rez;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 20;
	char str[n];
	cout << "Enter the string: ";
	cin.getline(str, n);

	cout << is_palindrome(str) << endl;

	if (is_int_number(str))
	{
		cout << "Десятичное значение числа: " << to_int_number(str) << endl;
	}
	else cout << str << endl;


	if (is_bin_number(str))
	{
		cout << "Десятичное значение двоичного числа: " << bin_to_dec(str) << endl;
	}
	else cout << "Строка не является двоичным числом :-(" << endl;


	if (is_hex_number(str))
	{
		cout << "Десятичное значение шестнадцатеричного числа: " << hex_to_dec(str) << endl;
	}
	else cout << "Строка не является шестнадцатеричным числом :-(" << endl;

}

