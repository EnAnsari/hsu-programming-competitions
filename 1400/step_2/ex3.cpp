// Powered by Rahmatollah Ansari
// HSU Code Challenge

#include <iostream>		// console input and output
#include <conio.h>		// for getch() function


using namespace std;	//using::cout & ...



int main ()
{
	int long n;
	int t = 0;
	cout << "Enter your number: ";
	cin >> n;
	int arr[8], arr1[8];
	while (n)
	{
		arr[t] = n % 10;
		n /= 10;
		t++;
	}
	for (int i = t - 1; i >= 0; i--)
		for (int j = arr[i]; j > 0; j--)
			arr1[(t-1) - i] = arr[i] * arr[i];
	for (int i = 0; i < t; i++)
		cout << arr1[i] << endl;

	getch();	// for puase manitor end of program
	return 0;	// indicate that program ended successfully
}
// end functio main()


