#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;


int main ()
{
	
	vector <int> num;
	int n, a;
	cout << "How many Number: ";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> a;
		num.push_back(a);
	}
	float m = 0;
	for (int i = 0; i < n; i++)
		m += num.at(i);
	int j;
	for (int i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (num.at(i) < num.at(j)) swap(num.at(i), num.at(j));
	for (int i = 0; i < n; i++)
		if (i % 2) num.at(i) *= (-1);
	for (int i = 0; i < n; i++)
		cout << num.at(i) << "\t";
		
	cout << "\nAverage = " << m / n << endl;
	
	getch();
	return 0;
}
