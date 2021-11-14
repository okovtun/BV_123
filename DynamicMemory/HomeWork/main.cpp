#include<iostream>
#include<ctime>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

void completionArray(int arr[], int num);
void completionArray(double arr[], int num);
void completionArray(char arr[], int num);

void printArray(int arr[], int num);
void printArray(double arr[], int num);
void printArray(char arr[], int num);

void endArray(int*& arr, int& num);
void endArray(double*& arr, int& num);
void endArray(char*& arr, int& num);

void beginningArray(int*& arr, int num);
void beginningArray(double*& arr, int num);
void beginningArray(char*& arr, int num);

void insertArray(int*& arr, int num, int index);
void insertArray(double*& arr, int num, int index);
void insertArray(char*& arr, int num, int index);

void popBackArray(int*& arr, int num);
void popBackArray(double*& arr, int num);
void popBackArray(char*& arr, int num);

void popFrontArray(int*& arr, int num);
void popFrontArray(double*& arr, int num);
void popFrontArray(char*& arr, int num);

void eraseArray(int*& arr, int num, int index);
void eraseArray(double*& arr, int num, int index);
void eraseArray(char*& arr, int num, int index);

int** allocateMatrix(int row, int column);
double** allocateMatrix(double arr[], int row, int column);
char** allocateMatrix(char arr[], int row, int column);

void completionMatrix(int** matrix, int row, int column);
void completionMatrix(double** matrix, int row, int column);
void completionMatrix(char** matrix, int row, int column);

void printMatrix(int** matrix, int row, int column);
void printMatrix(double** matrix, int row, int column);
void printMatrix(char** matrix, int row, int column);

void deleteMatrix(int** matrix, int row);
void deleteMatrix(double** matrix, int row);
void deleteMatrix(char** matrix, int row);

void pushRowBackMatrix(int**& matrix, int &row, int column);
void pushRowBackMatrix(double**& matrix, int& row, int column);
void pushRowBackMatrix(char**& matrix, int& row, int column);

void pushRowFrontMatrix(int**& matrix, int& row, int column);
void pushRowFrontMatrix(double**& matrix, int& row, int column);
void pushRowFrontMatrix(char**& matrix, int& row, int column);

void insertRowMatrix(int**& matrix, int& row, int column, int index);
void insertRowMatrix(double**& matrix, int& row, int column, int index);
void insertRowMatrix(char**& matrix, int& row, int column, int index);


void popRowBackMatrix(int**& matrix, int& row, int column);
void popRowBackMatrix(double**& matrix, int& row, int column);
void popRowBackMatrix(char**& matrix, int& row, int column);

void popRowFrontMatrix(int**& matrix, int& row, int column);
void popRowFrontMatrix(double**& matrix, int& row, int column);
void popRowFrontMatrix(char**& matrix, int& row, int column);

void eraseRowMatrix(int**& matrix, int& row, int column, int index);
void eraseRowMatrix(double**& matrix, int& row, int column, int index);
void eraseRowMatrix(char**& matrix, int& row, int column, int index);

void pushColBackMatrix(int**& matrix, int row, int& column);
void pushColBackMatrix(double**& matrix, int row, int& column);
void pushColBackMatrix(char**& matrix, int row, int& column);

void pushColFrontMatrix(int**& matrix, int row, int& column);
void pushColFrontMatrix(double**& matrix, int row, int& column);
void pushColFrontMatrix(char**& matrix, int row, int& column);

void insertColMatrix(int**& matrix, int row, int& column, int index);
void insertColMatrix(double**& matrix, int row, int& column, int index);
void insertColMatrix(char**& matrix, int row, int& column, int index);

void popColBackMatrix(int**& matrix, int row, int& column);
void popColBackMatrix(double**& matrix, int row, int& column);
void popColBackMatrix(char**& matrix, int row, int& column);

void popColFrontMatrix(int**& matrix, int row, int& column);
void popColFrontMatrix(double**& matrix, int row, int& column);
void popColFrontMatrix(char**& matrix, int row, int& column);

void eraseColMatrix(int**& matrix, int row, int& column, int index);
void eraseColMatrix(double**& matrix, int row, int& column, int index);
void eraseColMatrix(char**& matrix, int row, int& column, int index);

//#define DYNAMIC_MEMORY_1

int main()
{
	srand(time(NULL));

#ifdef DYNAMIC_MEMORY_1
	int num;

	cout << "Enter number: ";
	cin >> num;
	int* arr = new int[num];
	double* arr2 = new double[num];
	char* arr3 = new char[num];


	completionArray(arr, num);
	printArray(arr, num);

	completionArray(arr2, num);
	printArray(arr2, num);

	completionArray(arr3, num);
	printArray(arr3, num);

	++num;

	endArray(arr, num);
	printArray(arr, num);

	endArray(arr2, num);
	printArray(arr2, num);

	endArray(arr3, num);
	printArray(arr3, num);

	++num;

	beginningArray(arr, num);
	printArray(arr, num);

	beginningArray(arr2, num);
	printArray(arr2, num);

	beginningArray(arr3, num);
	printArray(arr3, num);

	int index;

	cout << "Enter index:";
	cin >> index;

	++num;

	insertArray(arr, num, index);
	printArray(arr, num);

	insertArray(arr2, num, index);
	printArray(arr2, num);

	insertArray(arr3, num, index);
	printArray(arr3, num);



	--num;

	popBackArray(arr, num);
	printArray(arr, num);

	popBackArray(arr2, num);
	printArray(arr2, num);

	popBackArray(arr3, num);
	printArray(arr3, num);

	--num;

	popFrontArray(arr, num);
	printArray(arr, num);

	popFrontArray(arr2, num);
	printArray(arr2, num);

	popFrontArray(arr3, num);
	printArray(arr3, num);

	eraseArray(arr, num, index);
	eraseArray(arr2, num, index);
	eraseArray(arr3, num, index);

	--num;

	printArray(arr, num);
	printArray(arr2, num);
	printArray(arr3, num);
#endif // DYNAMIC_MEMORY_1

	int index;
	int row,
		column;

	cout << "Enter row: ";
	cin >> row;

	cout << "Enter column:";
	cin >> column;

	int** matrix = allocateMatrix(row, column);
	double** matrix2 = allocateMatrix(arr2, row, column);
	char** matrix3 = allocateMatrix(arr3, row, column);

	completionMatrix(matrix, row, column);
	printMatrix(matrix, row, column);

	completionMatrix(matrix2, row, column);
	printMatrix(matrix2, row, column);

	completionMatrix(matrix3, row, column);
	printMatrix(matrix3, row, column);


	pushRowBackMatrix(matrix, row, column);
	pushRowBackMatrix(matrix2, row, column);
	pushRowBackMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	pushRowFrontMatrix(matrix, row, column);
	pushRowFrontMatrix(matrix2, row, column);
	pushRowFrontMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);


	insertRowMatrix(matrix, row, column, index);
	insertRowMatrix(matrix2, row, column, index);
	insertRowMatrix(matrix3, row, column, index);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	popRowBackMatrix(matrix, row, column);
	popRowBackMatrix(matrix2, row, column);
	popRowBackMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	popRowFrontMatrix(matrix, row, column);
	popRowFrontMatrix(matrix2, row, column);
	popRowFrontMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	eraseRowMatrix(matrix, row, column, index);
	eraseRowMatrix(matrix2, row, column, index);
	eraseRowMatrix(matrix3, row, column, index);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	pushColBackMatrix(matrix, row, column);
	pushColBackMatrix(matrix2, row, column);
	pushColBackMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	pushColFrontMatrix(matrix, row, column);
	pushColFrontMatrix(matrix2, row, column);
	pushColFrontMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	insertColMatrix(matrix, row, column, index);
	insertColMatrix(matrix2, row, column, index);
	insertColMatrix(matrix3, row, column, index);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	popColBackMatrix(matrix, row, column);
	popColBackMatrix(matrix, row, column);
	popColBackMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	popColFrontMatrix(matrix, row, column);
	popColFrontMatrix(matrix2, row, column);
	popColFrontMatrix(matrix3, row, column);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	eraseColMatrix(matrix, row, column, index);
	eraseColMatrix(matrix2, row, column, index);
	eraseColMatrix(matrix3, row, column, index);

	printMatrix(matrix, row, column);
	printMatrix(matrix2, row, column);
	printMatrix(matrix3, row, column);

	deleteMatrix(matrix, row);
	deleteMatrix(matrix2, row);
	deleteMatrix(matrix3, row);

	delete[] arr3;
	delete[] arr2;
	delete[] arr;

	return 0;
}

void completionArray(int arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = rand() % 20 - 10;
	}
}
void completionArray(double arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = i + 0.1;
	}
}
void completionArray(char arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = 'a' + i;
	}
}

void printArray(int arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}
void printArray(double arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}
void printArray(char arr[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i];
	}
	cout << endl << endl;
}

void endArray(int*& arr, int& num)
{
	int* arr2 = new int[num];



	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i] = arr[i];
	}

	arr2[num - 1] = 0;


	delete[] arr;

	arr = arr2;

}
void endArray(double*& arr, int& num)
{
	double* arr2 = new double[num];



	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i] = arr[i];
	}

	arr2[num - 1] = num + 0.1;


	delete[] arr;

	arr = arr2;

}
void endArray(char*& arr, int& num)
{
	char* arr2 = new char[num];



	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i] = arr[i];
	}

	arr2[num - 1] = 'a';


	delete[] arr;

	arr = arr2;

}

void beginningArray(int*& arr, int num)
{
	int* arr2 = new int[num];

	arr2[0] = 0;

	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i + 1] = arr[i];
	}


	delete[] arr;

	arr = arr2;
}
void beginningArray(double*& arr, int num)
{
	double* arr2 = new double[num];

	arr2[0] = num + 0.1;

	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i + 1] = arr[i];
	}


	delete[] arr;

	arr = arr2;
}
void beginningArray(char*& arr, int num)
{
	char* arr2 = new char[num];

	arr2[0] = 'a' + num;

	for (int i = 0; i < num - 1; ++i)
	{

		arr2[i + 1] = arr[i];
	}


	delete[] arr;

	arr = arr2;
}

void insertArray(int*& arr, int num, int index)
{
	int* arr2 = new int[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	arr2[index - 1] = 0;

	for (int i = num - 1; i >= index; --i)
	{
		arr2[i] = arr[i - 1];
	}

	delete[] arr;

	arr = arr2;
}
void insertArray(double*& arr, int num, int index)
{
	double* arr2 = new double[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	arr2[index - 1] = index + 0.1;

	for (int i = num - 1; i >= index; --i)
	{
		arr2[i] = arr[i - 1];
	}

	delete[] arr;

	arr = arr2;
}
void insertArray(char*& arr, int num, int index)
{
	char* arr2 = new char[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	arr2[index - 1] = 'a' + index;

	for (int i = num - 1; i >= index; --i)
	{
		arr2[i] = arr[i - 1];
	}

	delete[] arr;

	arr = arr2;
}

void popBackArray(int*& arr, int num)
{
	int* arr2 = new int[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i];
	}

	delete[] arr;

	arr = arr2;
}
void popBackArray(double*& arr, int num)
{
	double* arr2 = new double[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i];
	}

	delete[] arr;

	arr = arr2;
}
void popBackArray(char*& arr, int num)
{
	char* arr2 = new char[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i];
	}

	delete[] arr;

	arr = arr2;
}

void popFrontArray(int*& arr, int num)
{
	int* arr2 = new int[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i + 1];
	}

	delete[] arr;

	arr = arr2;
}
void popFrontArray(double*& arr, int num)
{
	double* arr2 = new double[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i + 1];
	}

	delete[] arr;

	arr = arr2;
}
void popFrontArray(char*& arr, int num)
{
	char* arr2 = new char[num];

	for (int i = 0; i < num; ++i)
	{
		arr2[i] = arr[i + 1];
	}

	delete[] arr;

	arr = arr2;
}

void eraseArray(int*& arr, int num, int index)
{
	int* arr2 = new int[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	for (int i = index; i < num; ++i)
	{
		arr2[i - 1] = arr[i];
	}



	delete[] arr;

	arr = arr2;
}
void eraseArray(double*& arr, int num, int index)
{
	double* arr2 = new double[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	for (int i = index; i < num; ++i)
	{
		arr2[i - 1] = arr[i];
	}



	delete[] arr;

	arr = arr2;
}
void eraseArray(char*& arr, int num, int index)
{
	char* arr2 = new char[num];

	for (int i = 0; i < index - 1; ++i)
	{
		arr2[i] = arr[i];
	}

	for (int i = index; i < num; ++i)
	{
		arr2[i - 1] = arr[i];
	}



	delete[] arr;

	arr = arr2;
}

int** allocateMatrix(int row, int column)
{
	int** matrix = new int*[row];

	for (int i = 0; i < row; ++i)
	{
		matrix[i] = new int[column];
	}

	return matrix;
}
double** allocateMatrix(double arr[], int row, int column)
{
	double** matrix = new double*[row];

	for (int i = 0; i < row; ++i)
	{
		matrix[i] = new double[column];
	}

	return matrix;
}
char** allocateMatrix(char arr[], int row, int column)
{
	char** matrix = new char*[row];

	for (int i = 0; i < row; ++i)
	{
		matrix[i] = new char[column];
	}

	return matrix;
}

void completionMatrix(int** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			matrix[i][j] = rand() % 20 - 10;
		}
	}
}
void completionMatrix(double** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			matrix[i][j] = i + j + 0.1;
		}
	}
}
void completionMatrix(char** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			matrix[i][j] = 'a' + i + j;
		}
	}
}

void printMatrix(int** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void printMatrix(double** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void printMatrix(char** matrix, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void deleteMatrix(int** matrix, int row)
{
	for (int i = 0; i < row; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}
void deleteMatrix(double** matrix, int row)
{
	for (int i = 0; i < row; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}
void deleteMatrix(char** matrix, int row)
{
	for (int i = 0; i < row; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}

void pushRowBackMatrix(int**& matrix, int &row, int column)
{
	int** matrix2 = allocateMatrix(row + 1, column);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{

			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < column; i++)
	{
		matrix2[row][i] = i;
	}

	row++;

	matrix = matrix2;

}
void pushRowBackMatrix(double**& matrix, int& row, int column)
{
	row--;

	double** matrix2 = new double*[row + 1];

	for (int i = 0; i < row + 1; i++)
	{
		matrix2[i] = new double[column];
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{

			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < column; i++)
	{
		matrix2[row][i] = i + 0.1;
	}
	row++;

	matrix = matrix2;

}
void pushRowBackMatrix(char**& matrix, int& row, int column)
{
	row--;
	char** matrix2 = new char*[row + 1];

	for (int i = 0; i < row + 1; i++)
	{
		matrix2[i] = new char[column];
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{

			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < column; i++)
	{
		matrix2[row][i] = 'a' + i;
	}
	row++;

	matrix = matrix2;

}

void pushRowFrontMatrix(int**& matrix, int& row, int column)
{

	int** matrix2 = allocateMatrix(row + 1, column);


	for (int i = 0; i < column; i++)
	{
		matrix2[0][i] = i;
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{

			matrix2[i + 1][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	row++;

	matrix = matrix2;
}
void pushRowFrontMatrix(double**& matrix, int& row, int column)
{
	row--;

	double** matrix2 = new double*[row + 1];

	for (int i = 0; i < row + 1; i++)
	{
		matrix2[i] = new double[column];
	}


	for (int i = 0; i < column; i++)
	{
		matrix2[0][i] = i + 0.1;
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{

			matrix2[i + 1][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);


	row++;


	matrix = matrix2;
}
void pushRowFrontMatrix(char**& matrix, int& row, int column)
{
	row--;

	char** matrix2 = new char*[row + 1];

	for (int i = 0; i < row + 1; i++)
	{
		matrix2[i] = new char[column];
	}


	for (int i = 0; i < column; i++)
	{
		matrix2[0][i] = 'a' + i;
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{

			matrix2[i + 1][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);


	row++;


	matrix = matrix2;
}

void insertRowMatrix(int**& matrix, int& row, int column, int index)
{

	int** matrix2 = allocateMatrix(row + 1, column);

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < column; i++)
	{
		matrix2[index][i] = i;
	}

	for (int i = row; i > index; i--)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i - 1][j];
		}
	}

	deleteMatrix(matrix, row);

	row++;

	matrix = matrix2;
}
void insertRowMatrix(double**& matrix, int& row, int column, int index)
{
	row--;

	double** matrix2 = new double*[row + 1];

	for (int i = 0; i < row + 1; i++)
	{
		matrix2[i] = new double[column];
	}

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < column; i++)
	{
		matrix2[index][i] = i + 0.1;
	}

	for (int i = row; i > index; i--)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i - 1][j];
		}
	}

	deleteMatrix(matrix, row);

	row++;

	matrix = matrix2;
}
void insertRowMatrix(char**& matrix, int& row, int column, int index)
{
	row--;

	char** matrix2 = new char*[row + 1];

	for (int i = 0; i < row + 1; i++)
	{
		matrix2[i] = new char[column];
	}

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < column; i++)
	{
		matrix2[index][i] = 'a' + i;
	}

	for (int i = row; i > index; i--)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i - 1][j];
		}
	}

	deleteMatrix(matrix, row);

	row++;

	matrix = matrix2;
}

void popRowBackMatrix(int**& matrix, int& row, int column)
{
	int** matrix2 = allocateMatrix(row - 1, column);

	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	row--;

	matrix = matrix2;
}
void popRowBackMatrix(double**& matrix, int& row, int column)
{
	row++;

	double** matrix2 = new double*[row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = new double[column];
	}

	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	row--;

	matrix = matrix2;
}
void popRowBackMatrix(char**& matrix, int& row, int column)
{
	row++;

	char** matrix2 = new char*[row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = new char[column];
	}

	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	row--;

	matrix = matrix2;
}

void popRowFrontMatrix(int**& matrix, int& row, int column)
{

	int** matrix2 = allocateMatrix(row - 1, column);

	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i + 1][j];
		}
	}

	deleteMatrix(matrix, row);


	matrix = matrix2;
}
void popRowFrontMatrix(double**& matrix, int& row, int column)
{

	double** matrix2 = new double*[row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = new double[column];
	}

	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i + 1][j];
		}
	}

	deleteMatrix(matrix, row);



	matrix = matrix2;
}
void popRowFrontMatrix(char**& matrix, int& row, int column)
{
	char** matrix2 = new char*[row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = new char[column];
	}

	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i + 1][j];
		}
	}

	deleteMatrix(matrix, row);

	row--;

	matrix = matrix2;
}

void eraseRowMatrix(int**& matrix, int& row, int column, int index)
{

	int** matrix2 = allocateMatrix(row - 1, column);

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = index; i < row - 1;)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i + 1][j];
		}
	}

	deleteMatrix(matrix, row);

	row--;

	matrix = matrix2;
}
void eraseRowMatrix(double**& matrix, int& row, int column, int index)
{
	row++;

	double** matrix2 = new double*[row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = new double[column];
	}

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = index; i < row - 1;)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i + 1][j];
		}
	}

	deleteMatrix(matrix, row);

	row--;

	matrix = matrix2;
}
void eraseRowMatrix(char**& matrix, int& row, int column, int index)
{
	row++;

	char** matrix2 = new char*[row - 1];

	for (int i = 0; i < row - 1; i++)
	{
		matrix2[i] = new char[column];
	}

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = index; i < row - 1;)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j] = matrix[i + 1][j];
		}
	}

	deleteMatrix(matrix, row);

	row--;

	matrix = matrix2;
}

void pushColBackMatrix(int**& matrix, int row, int& column)
{
	int** matrix2 = allocateMatrix(row, column + 1);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{

			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < row; i++)
	{
		matrix2[i][column] = i;
	}

	column++;

	matrix = matrix2;
}
void pushColBackMatrix(double**& matrix, int row, int& column)
{
	column--;

	double** matrix2 = new double*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new double[column + 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{

			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < row; i++)
	{
		matrix2[i][column] = i + 0.1;
	}

	column++;

	matrix = matrix2;
}
void pushColBackMatrix(char**& matrix, int row, int& column)
{
	column--;

	char** matrix2 = new char*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new char[column + 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{

			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < row; i++)
	{
		matrix2[i][column] = 'a' + i;
	}

	column++;

	matrix = matrix2;
}

void pushColFrontMatrix(int**& matrix, int row, int& column)
{

	int** matrix2 = allocateMatrix(row, column + 1);

	for (int i = 0; i < row; i++)
	{
		matrix2[i][column - column] = i;
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j + 1] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	column++;

	matrix = matrix2;
}
void pushColFrontMatrix(double**& matrix, int row, int& column)
{
	column--;

	double** matrix2 = new double*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new double[column + 1];
	}

	for (int i = 0; i < row; i++)
	{
		matrix2[i][column - column] = i + 0.1;
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j + 1] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	column++;

	matrix = matrix2;
}
void pushColFrontMatrix(char**& matrix, int row, int& column)
{
	column--;

	char** matrix2 = new char*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new char[column + 1];
	}

	for (int i = 0; i < row; i++)
	{
		matrix2[i][column - column] = 'a' + i;
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix2[i][j + 1] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	column++;

	matrix = matrix2;
}

void insertColMatrix(int**& matrix, int row, int& column, int index)
{
	int** matrix2 = allocateMatrix(row, column + 1);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < index; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = column; j > index; j--)
		{
			matrix2[i][j] = matrix[i][j - 1];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < row; i++)
	{
		matrix2[i][index] = i;
	}


	matrix = matrix2;
}
void insertColMatrix(double**& matrix, int row, int& column, int index)
{

	double** matrix2 = new double*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new double[column + 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < index; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = column; j > index; j--)
		{
			matrix2[i][j] = matrix[i][j - 1];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < row; i++)
	{
		matrix2[i][index] = i + 0.1;
	}

	column++;

	matrix = matrix2;
}
void insertColMatrix(char**& matrix, int row, int& column, int index)
{
	column--;

	char** matrix2 = new char*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new char[column + 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < index; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = column; j > index; j--)
		{
			matrix2[i][j] = matrix[i][j - 1];
		}
	}

	deleteMatrix(matrix, row);

	for (int i = 0; i < row; i++)
	{
		matrix2[i][index] = 'a' + i;
	}

	column++;

	matrix = matrix2;
}


void popColBackMatrix(int**& matrix, int row, int& column)
{
	int** matrix2 = allocateMatrix(row, column - 1);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	matrix = matrix2;
}
void popColBackMatrix(double**& matrix, int row, int& column)
{

	double** matrix2 = new double*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new double[column - 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	matrix = matrix2;
}
void popColBackMatrix(char**& matrix, int row, int& column)
{

	char** matrix2 = new char*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new char[column - 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	deleteMatrix(matrix, row);

	column--;

	matrix = matrix2;
}


void popColFrontMatrix(int**& matrix, int row, int& column)
{
	int** matrix2 = allocateMatrix(row, column - 1);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[i][j] = matrix[i][j + 1];
		}
	}

	deleteMatrix(matrix, row);

	column--;

	matrix = matrix2;
}
void popColFrontMatrix(double**& matrix, int row, int& column)
{
	column++;

	double** matrix2 = new double*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new double[column - 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[i][j] = matrix[i][j + 1];
		}
	}

	deleteMatrix(matrix, row);

	column--;

	matrix = matrix2;
}
void popColFrontMatrix(char**& matrix, int row, int& column)
{
	column++;

	char** matrix2 = new char*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new char[column - 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column - 1; j++)
		{
			matrix2[i][j] = matrix[i][j + 1];
		}
	}

	deleteMatrix(matrix, row);

	column--;

	matrix = matrix2;
}


void eraseColMatrix(int**& matrix, int row, int& column, int index)
{
	int** matrix2 = allocateMatrix(row, column - 1);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < index; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = index; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j + 1];
		}
	}

	deleteMatrix(matrix, row);

	column--;

	matrix = matrix2;
}
void eraseColMatrix(double**& matrix, int row, int& column, int index)
{
	column++;

	double** matrix2 = new double*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new double[column - 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < index; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = index; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j + 1];
		}
	}

	deleteMatrix(matrix, row);

	column--;

	matrix = matrix2;
}
void eraseColMatrix(char**& matrix, int row, int& column, int index)
{
	column++;

	char** matrix2 = new char*[row];

	for (int i = 0; i < row; i++)
	{
		matrix2[i] = new char[column - 1];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < index; j++)
		{
			matrix2[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = index; j < column; j++)
		{
			matrix2[i][j] = matrix[i][j + 1];
		}
	}

	deleteMatrix(matrix, row);

	column--;

	matrix = matrix2;
}