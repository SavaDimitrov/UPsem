#include <iostream>

using namespace std;

// int a =5 - globalna promenliva

bool isPrime(int num) //Dali edno chislo e prosto
{
	bool check = true; // - lokalna promenliva
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			check = false;
			break;
		}
	}
	return check;
}

bool TwinPrimes(int num1, int num2) //dali dve chisla sa vzaimno prosti ili neshto ot sorta
{
	bool check = false;
	if (isPrime(num1) && isPrime(num2) && num1 + 2 == num2)
	{
		check = true;
	}
	return check;
}

double PrimeSum(double num, double num1, double sum) //suma ot reciprochnite na dve chisla(v chastnost prosti)
{
	return sum += (1 / num) + (1 / num1);
}

void SumOfPrimes(int num) //izvejda sumata na prostite chisla = na chislo vuvedeno ot potrebitelq.
						  // num - formalna promenliva
{
	for (int i = 3; i < num; i++)
	{
		int j = num - i;
		
		if (j != 1 && isPrime(i) && isPrime(j))
		{
			cout << i << " + " << j << " = " << num << endl;
		}
	}
}

int main()
{
		//Vzaimno prosti suma, proverki
	//double x;
	//cin >> x;
	//double sum = 0;

	//if (x > 0 && x < 1)
	//{
	//	for (double num = 3, num1 = 5; ; num++, num1++)
	//	{
	//		if (TwinPrimes(num, num1))
	//		{
	//			PrimeSum(num, num1, sum);
	//			if ((1 / num) + (1 / num1) > x)
	//			{
	//				cout << PrimeSum(num, num1, sum) << endl;
	//				break;
	//			}
	//		}
	//	}
	//}


		//prostite chisla v interval [x,y]
	/*int x, y;
	cin >> x >> y;

	for (int i = x; i <= y; i++)
	{
		if (isPrime(i))
			cout << i << endl;
	}*/

		//sumata na 2 prosti chisla = na number
	/*int number;
	cin >> number;
	SumOfPrimes(number);
*/

	


	system("pause");
	return 0;
}