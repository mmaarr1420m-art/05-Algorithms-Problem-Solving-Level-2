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

int Frequency(int Num, int DigitCheck)
{
	int Remainder = 0, FrecuencyCount = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;

		if (DigitCheck == Remainder)
		{
			FrecuencyCount++;
		}
	}
	return FrecuencyCount;
}

void PrintAllFrequencyDigit(int Num)
{
	for (int i = 1; i <= 9; i++)
	{
		if (Frequency(Num, i) > 0)
		{
			cout << "Digit " << i << " Frequency is " << Frequency(Num, i) << "Time(s)";
			cout << endl;
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please enter the main number?");

	PrintAllFrequencyDigit(Number);

	return 0;
}