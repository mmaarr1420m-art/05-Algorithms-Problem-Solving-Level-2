#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num;
	do
	{
		cout << Message << endl;
		cin >> Num;
		cout << endl;
	} while (Num <= 0);
	return Num;
}

void PrintInvertedNumberPattern(int Number)
{
	for (int i = 0; i < Number; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}