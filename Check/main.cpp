#include<iostream>
#include<Windows.h>
using namespace std;

void shrink(char *str, char *newStr)
{
	for (int i = 0; str[i]; ++i)
	{
		if (str[i] != ' ')
			newStr[i] = str[i];
	}
}
int main()
{
	setlocale(LC_ALL, "");

	const int n = 256;
	char str[n] = "Харашо       живьет   на    свете     Винни-Пух";
	char newStr[n];
	//cout << "Enter the string: ";
	//cin.getline(str, n);
	cout << str << endl;
	//cout << "Length of the string: " << StrLength(str) << endl;
	//StrUpper(str);
	//cout << str << endl;
	//StrLower(str);
	//cout << str << endl;
	shrink(str, newStr);
	cout << newStr << endl;
	return 0;
}