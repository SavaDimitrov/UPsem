#include <iostream>

using namespace std;

int main()
{
	//int n;
	//cin >> n;
	//int fib0 = 0;
	//int fib1 = 1;
	//int fib;
	//
	//for (int i = 1; i <= n; i++)
	//{		
	//	cout << fib0 << " ";
	//	fib = fib0 + fib1;
	//	fib0 = fib1;
	//	fib1 = fib;
	//}


	//int num;
	//cin >> num;
	//int revN = 0;
	//int a; //promenliva za zapazvane na ostatuka
	//cout << num << " ";
	//while (num)
	//{
	//	a = num % 10;
	//	num /= 10;
	//	revN *= 10;
	//	revN += a;
	//}
	//cout << revN << endl;


	// dali tochka prinadleji na okrujnost: (x1 - x)^2 + (y1 - y)^2 <= r^r, kato (x,y)
	//sa koordinatite na centura na samata okrujnost.

	int h;
	cin >> h;

	if (h % 2 == 0)
	{
		cout << "Vuvedete nechetno chislo za h!" << endl;
	}
	else
	{
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= h; j++)
			{
				if ( (i + j - 1) == h || i==j)
				{
					cout << '*';
				}
				else cout << " ";
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;

}