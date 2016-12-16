#include <iostream>

using namespace std;

int const MAX_SIZE = 100;

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void arrInput(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}
	system("cls");
}


void arrOutput(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}


int main()
{

	/*int num1 = 5, num2 = 6;

	cout << num1 << " " << num2 << endl;

	swap(&num1, &num2);

	cout << num1 << " " << num2 << endl;*/

	/*int arr[5];
	int *parr;
	parr = arr;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	system("cls");

	cout << arr[0] << " " << *parr << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << *parr + i << " ";
	}
	cout << endl;*/

	int array[MAX_SIZE];
	int arrSize;
	cin >> arrSize;

	arrInput(array, arrSize);
	arrOutput(array, arrSize);




	system("pause");
	return 0;
}