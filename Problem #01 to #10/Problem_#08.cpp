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

void PrintAllFrequencyDigit(int Num, short DigitToCheck)
{
	cout << "Digit " << DigitToCheck << " Frequency is " << Frequency(Num, DigitToCheck) << " Time(s)";
	cout << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Please enter the main number?");
	short Digit = ReadPositiveNumber("Please enter one digit to check?");

	PrintAllFrequencyDigit(Number, Digit);
	
	return 0;
}