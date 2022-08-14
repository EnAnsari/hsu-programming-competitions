#include <iostream>
#include <conio.h>

using namespace std;


int main ()
{
	int matr1[2][3], matr2[3][2], result[2][2] = {0};
	cout  << "Matrix 2*3\n";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cin >> matr1[i][j];
			
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			cin >> matr2[i][j];
	
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			for (int k = 0; k < 3; k++)
				result[i][j] += matr1[i][k] * matr2[k][j];
				
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << result[i][j] << "\t";
		cout << endl;
	}
	getch();
	return 0;
}
