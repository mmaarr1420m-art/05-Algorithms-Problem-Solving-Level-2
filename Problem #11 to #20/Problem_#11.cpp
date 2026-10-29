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

bool CheckPalindromeNum(int Num, int Num2)
{
	return (Num == Num2);
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

void PrintResult(int Num)
{
	if (CheckPalindromeNum(Num, ReverseNums(Num)))
		cout << "Yes, it is Palindeome Number\n";
	else
		cout << "No, it is NOT Palindeome Number\n";
}

int main()
{
	PrintResult(ReadPositiveNumber("Enter Positive Number: "));
	return 0;
}