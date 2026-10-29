#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;
		cout << "\n";
	} while (Num <= 0);
	return Num;
}

bool GetDivisorsSum(int Num)
{
	int sum = 0;
	for (int i = 1; i < Num; i++)
	{
		if (Num % i == 0)
		{
			sum += i;
		}
	}
	return sum == Num;
}

void PrintPerfectNum(int Num)
{
	if (GetDivisorsSum(Num))
		cout << Num << " is Perfect Number.\n";
	else
		cout << Num << " is Not Perfect Number.\n";
}

int main()
{
	PrintPerfectNum(ReadNum("Please Enter Positive Number?"));
	return 0;
}