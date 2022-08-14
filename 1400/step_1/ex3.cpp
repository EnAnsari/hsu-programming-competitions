#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	string A[20], B[20];
	int n = 0, m = 0;
	
	ifstream file ("./hakimac.txt");
	
	while (getline(file, A[n]))
	{
		n++;
	}
	file.close();
	bool t;
	for (int i = 0; i < n; i++)
	{
		t = true;
		if (m)
		{
			for (int j = 0; j < m; j++)
				if (A[i] == B[j]) t = false;
		}
		if (t)
		{
		B[m] = A[i];
		m++;
		}
	}

	ofstream file1 ("./RahmatollahAnsari.txt", ios::out);
	for (int i = 0; i < m; i++)
		file1 << B[i] << endl;
	file1.close();
	return 0;
}
