#include <iostream>
#include <conio.h>

using namespace std;

struct mm
{
	unsigned int max;
	unsigned int min;
};

mm max_min (unsigned int arr[]);

int main ()
{
	unsigned int array[6];
	mm maxORmin;
	cout << "Enter 6 Number ...!" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> array[i];
	}
	maxORmin = max_min(array);
	cout << "Maximum = " << maxORmin.max << endl;
	cout << "Minimum = " << maxORmin.min << endl;

	getch();
	return 0;
}

mm max_min (unsigned int arr[])
{
	unsigned int min = 0;
	unsigned int max = 0;
	mm x;
	int j, t = 0;
	unsigned int arr1[6];
	for (int i = 0; i < 6; i++)
		if (arr[i])
		{
			arr1[t] = arr[i];
			t++;
		}
	for (int i = 0; i < t; i++)
		for (j = i + 1; j < t; j++)
			if (arr1[i] > arr1[j]) swap(arr1[i], arr1[j]);
	for (int i = 0; i < t; i++)
	{
		int power = 1;
		for (int k = 1; k < i; k++) power *= 10;
		min += arr[5 - i] * power;
		max += arr [i] * power;
	}
	if (t != 6)
	{
		int power = 1;
		for (int i = 0; i < (6 - t); i++) power *= 10;
		max *= power;
		min *= power;
	}
	x.max = max;
	x.min = min;
	return x;
}

