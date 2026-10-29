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

bool IsPerfectNumber(int Num)
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
	for (int i = 1; i < Num; i++)
	{
		if (IsPerfectNumber(i))
		{
			cout << i << endl;
		}
	}
}

int main()
{
	PrintPerfectNum(ReadNum("Please Enter Positive Number?"));
	return 0;
}