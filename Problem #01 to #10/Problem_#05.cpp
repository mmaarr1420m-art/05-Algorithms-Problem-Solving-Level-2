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

void PrintreverseNums(int Num)
{
	int Remainder = 0;

	while (Num > 0)
	{
		Remainder = Num % 10;
		Num = Num / 10;
		cout << Remainder << endl;
	}
}

int main()
{
	PrintreverseNums(ReadPositiveNumber("Please Enter Positive Number?"));
	return 0;
}