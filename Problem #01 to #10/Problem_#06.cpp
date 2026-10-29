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

void PrintSumOfDigits(int Num)
{
	int Remainder = 0, Sum = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Sum += Remainder;
		Num = Num / 10;
	}
	cout << Sum << endl;
}

int main()
{
	cout << "Sum Of Digits ";
	PrintSumOfDigits(ReadPositiveNumber("Please Enter Positive Number?"));
	return 0;
}