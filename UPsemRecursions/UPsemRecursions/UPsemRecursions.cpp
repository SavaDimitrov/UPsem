// UPsemRecursions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int const MAX_SIZE = 10;

	//third task - change a selected digit in a number with another different digit, use recursion.
int convertDigit(int n, int a, int b)
{
	if (n)
	{
		int res = convertDigit(n / 10, a, b);
		int temp = n % 10;
		res *= 10;
		if (temp == a)
		{
			temp = b;
		}
		res = res + temp;
		return res;
	}
	return 0;
}

		//second task
void matrixInput(int matr[][MAX_SIZE], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> matr[i][j];

			/*do
			{
				cin >> matr[i][j];

				if (matr[i][j] != 0 || matr[i][j] != 1)
				{
					cout << "Input the element again. It must be 0 or 1." << endl;
				}

			} while (matr[i][j] != 0 || matr[i][j] != 1);*/
		}
	}
	system("cls");
}

void matrixOutput(int matr[][MAX_SIZE], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << matr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

bool findPath(int matr[MAX_SIZE][MAX_SIZE], int row, int column, int x, int y, int x1, int y1)
{
	if (x == x1 && y == y1)
	{
		return true;
	}

	if ((x < 0 && x > row) && (x1 < 0 && x1 > row) && (y < 0 && y > column) && (y1 < 0 && y1 > column))
	{
		return false;
	}

	if (matr[x][y] != 0 && matr[x1][y1] != 0)
	{
		return false;
	}
	
	if (matr[x + 1][y] != 0 || matr[x][y + 1] != 0)
	{
		return false;
	}

	if (matr[x + 1][y] == 0)
	{
		return findPath(matr, row, column, x + 1, y, x1, y1);
	}
	
	if (matr[x][y + 1] == 0)
	{
		return findPath(matr, row, column, x, y + 1, x1, y1);
	}
}

		//first task
void rev(int number, int temp)
{

	if (number == 1)
	{
		cout << temp << endl;
		return;
	}
	else
	{
		cout << number % 10;
	}
	
	rev(number/10, temp);
}

void rev2(int number)
{
	if (number < 10)
	{
		cout << number;
		return;
	}
	else
	{
		cout << number % 10;
		rev2(number / 10);
	}
	cout << number % 10;
}



int main()
{
	/*int num;

	cin >> num;

	int temp = num;

	rev(num, temp);*/


	int matrix[MAX_SIZE][MAX_SIZE];

	int rows;
	int columns;

	cin >> rows;
	cin >> columns;

	matrixInput(matrix, rows, columns);

	cout << "Our labyrinth is: " << endl;
	matrixOutput(matrix, rows, columns);

	cout << "Input the coordinates for the start point and end point." << endl;

	int x, y, x1, y1;
	cin >> x >> y >> x1 >> y1;

	cout << findPath(matrix, rows, columns, x, y, x1, y1) << endl;



	system("pause");
    return 0;
}

