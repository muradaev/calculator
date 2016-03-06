#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int n;
	double a, b;
	cout << "Hello, you want to: \n";
	cout << "1. Multiply.\n";
	cout << "2. Add.\n";
	cout << "3. Subtract.\n";
	cout << "4. Divide.\n";
	cout << "5. Square root.\n";
	cout << "6. Percentage.\n";
	cout << "7. Exit.\n\n";
	cin >> n;
	cout << "\nEnter first number: ";
	cin >> a;
	if (n != 5)
	{
		cout << "Enter second number: ";
		cin >> b;
	}
	switch (n)
	{
		case 1:
		{
			cout << "Answer: " << a * b << ".";
			break;
		}
		case 2:
		{
			cout << "Answer: " << a + b << ".";
			break;
		}
		case 3:
		{
			cout << "Answer: " << a - b << ".";
			break;
		}
		case 4:
		{
			cout << "Answer: " << a / b << ".";
			break;
		}
		case 5:
		{
			cout << "Answer: " << sqrt (a) << ".";
			break;
		}
		case 6:
		{
			cout << "Answer: " << a * 100 / b << ".";
			break;
		}
		case 7:
		{
			break;
		}
	}
}
