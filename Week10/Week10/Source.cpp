#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int *temp;
	*temp = a;
	a = b;
	b = *temp;
	cout << a << " " << b << endl;
}

int main()
{
	//int var = 10;
	//cout << &var << endl; //& - address of; * - value pointed to by;
	//cout << &var + 1 << endl;
	////cout << &var + 2 << endl;
	//int *p = &var;
	//cout << p << endl;

	//int c = 5;
	//int *pc;

	//cout << "Value of c = " << c << endl;
	//cout << "Address of c is: " << &c << endl;

	//pc = &c;

	//cout << "Address which pc holds is: " << pc << endl;
	//cout << "Value at adress " << pc << "is: " << *pc << endl;

	//c = 11;

	//cout << "Address which pc holds is: " << pc << endl;
	//cout << "Value at adress " << pc << "is: " << *pc << endl;
	//
	//*pc = 20;

	//cout << "Address which pc holds is: " << pc << endl;
	//cout << "Value at adress " << pc << "is: " << *pc << endl;

	////vzimane na addresa na promenliva: ukazatel = & promenliva;
	////promqna na stoinosta na ukazatelq: *uk. = stoinost;

	int num1 = 5, num2 = 6;

	cout << num1 << " " << num2 << endl;
	swap(num1, num2);

	system("pause");
	return 0;
}