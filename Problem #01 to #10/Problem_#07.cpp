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

int ReverseNums(int Num)
{
	int Remainder = 0, Num2 = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		Num2 = Num2 * 10 + Remainder;
	}
	return Num2;
}

int main()
{
	cout << "\nReverse is :\n" << ReverseNums(ReadPositiveNumber("Please Enter Positive Number?"));
	return 0;
}