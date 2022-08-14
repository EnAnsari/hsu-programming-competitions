// Powered by Rahmatollah Ansari
// HSU Code Challenge

#include <iostream>		// console input and output
#include <conio.h>		// for getch() function

using namespace std;	//using::cout & ...

struct {
	int x[1000];	//Maximum of fibonachi digit
	int y = (-1);	// First value --- Not used...!
} num;				// alone object of my struct
int fn (int, int);	// header of my function

int main ()
{
	int n, m;
	cout << "Enter \"n\" and \"m\" in fibonachi sequence (n < m)-(Like 5 and 8) : ";
	cin >> n >> m;
	n = fn(n, m);
	getch();	// for puase manitor end of program
	return 0;	// indicate that program ended successfully
}
// end functio main()

int fn (int n, int m) // body of my function
{
	num.y++;
	int x = m - n;
	if (m <= 1) {
		num.x[num.y] = n;
		num.x[++num.y] = 1;
		num.y++;
		for (int i = 0; i < num.y; i++) cout << num.x[i] << " ";
		return 1;
	} else {
		num.x[num.y] = m;
		return fn(x, n);
	}
}
