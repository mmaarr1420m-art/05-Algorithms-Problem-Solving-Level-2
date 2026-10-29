#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber()
{
	int Num = 0;
	do
	{
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

int RandomNumbers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void AddElements(int Num, int Array2[100], int &Length2)
{
	Length2++;
	Array2[Length2 - 1] = Num;
}

void FillArray(int Array[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		Array[i] = RandomNumbers(1, 100);
	}
}

void PrintArry(int Array[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Array[i] << " ";
	}
}

bool CheckOddNumber(int Num)
{
	if (Num % 2 == 0)
		return false;
	else
		return true;
 }

void FillOddNumberArray(int Array[100], int Array2[100], int Length, int &Length2)
{
	for (int i = 0; i < Length; i++)
	{
		if (CheckOddNumber(Array[i]))
			AddElements(Array[i], Array2, Length2);
	}
}

void PrintOddNumberArray(int Array2[100], int Length2)
{
	for (int i = 0; i < Length2; i++)
	{
		cout << Array2[i] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Array2[100], Length = ReadPositiveNumber(), Length2 = 0;

	cout << "Array 1 elements:\n";
	FillArray(Array,Length);
	PrintArry(Array,Length);

	cout << endl << endl;

	cout << "Array 2 Odd numbers:\n";
	FillOddNumberArray(Array, Array2, Length,Length2);
	PrintOddNumberArray(Array2, Length2);

	cout << endl << endl;
	return 0;
}