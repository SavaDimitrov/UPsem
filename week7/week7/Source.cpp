#include <iostream>

using namespace std;

int const MAX_SIZE = 100;

int main()
{

	//int arr[MAX_SIZE];
	//int n;
	//cin >> n;
	//int temp;

	//for (int i = 0; i < n; i++)
	//{
	//	cin >> arr[i];
	//}
	//system("cls");

	//for (int i = 0; i < n; i++)
	//{
	//	cout << "arr[" << i << "]= " << arr[i];
	//}
	//cout << endl;

	//if (n % 2 == 0)
	//{
	//	for (int i = 0; i < (n / 2); i++)
	//	{
	//		temp = arr[n - 1 - i];
	//		arr[i] = arr[n - 1 - i];
	//		arr[n - 1 - i] = temp;
	//	}
	//}
	//else
	//{
	//	for (int i = 0; i < ((n-1) / 2); i++)
	//	{
	//		temp = arr[i];
	//		arr[i] = arr[n - 1 - i];
	//		arr[n - 1 - i] = temp;
	//	}
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	cout << "arr[" << i << "]= " << arr[i];
	//}
	//cout << endl;
		
		//Matrix
	//int arr[MAX_SIZE][MAX_SIZE];
	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 1; j <= n; j++)
	//	{
	//		cin >> arr[i][j];
	//	}
	//}
	//system("cls");

	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 1; j <= n; j++)
	//	{
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	int mat1[3][2], mat2[2][5], mat3[3][5] = { 0 };


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> mat1[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> mat2[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mat3[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}