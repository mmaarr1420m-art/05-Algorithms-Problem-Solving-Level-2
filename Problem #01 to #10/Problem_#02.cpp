#include <iostream>
#include <string>
using namespace std;

enum enPrimeOrNotPrime {Prime=1,NotPrime=2};

int ReadNum(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

enPrimeOrNotPrime CheckPrime(int Num)
{
	int Half = round(Num / 2);

	for (int i = 2; i <= Half; i++)
	{
		if (Num % i == 0)
			return enPrimeOrNotPrime::NotPrime;
	}
	return enPrimeOrNotPrime::Prime;
}

void PrintPrimeNum(int Num)
{
	cout << "Prime Number From 1 To " << Num << " are:\n";
	for (int i = 1; i <= Num; i++)
	{
		if (CheckPrime(i) == enPrimeOrNotPrime::Prime)
			cout << i << endl;
	}
}

int main()
{
	PrintPrimeNum(ReadNum("Please Enter Positive Number?"));
	return 0;
}
