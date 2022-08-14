// Powered by Rahmatollah Ansari
// HSU Code Challenge

#include <iostream>		// console input and output
#include <conio.h>		// for getch() function


using namespace std;	//using::cout & ...



int main ()
{
	int n;
	cout << "Enter N: ";
	cin >> n;
	if (n % 2 == 0) n++;
	int a1 = n / 2, a2 = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < a1; j++) cout << " ";
		for (int j = 0; j < a2; j++) cout << "+";
		for (int j = 0; j < a1 * 2; j++) cout << " ";
		for (int j = 0; j < a2; j++) cout << "+";
		if (i <= n / 2) {
			a1--;
			a2 += 2;
		}
		else {
			a1++;
			a2 -= 2;
		}
		cout << endl;
	}
	
	getch();	// for puase manitor end of program
	return 0;	// indicate that program ended successfully
}
// end functio main()


