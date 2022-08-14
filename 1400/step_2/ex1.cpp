// Powered by Rahmatollah Ansari
// HSU Code Challenge

#include <iostream>		// console input and output
#include <conio.h>		// for getch() function

using namespace std;	//using::cout & ...

void function (string, string); // function of question

int main ()
{
	string str1, str2;
	cout << "Enter your text...!\n\n=> ";
	getline(cin, str1);
	cout << "\nEnter your word...!\n\n=> ";
	getline(cin, str2);
	function(str1, str2); // my function...!
	getch();	// for puase manitor end of program
	return 0;	// indicate that program ended successfully
}
// end functio main()

void function (string t1, string t2) // body of function
{
	cout << "\n=> ";
	int x = -1;
	char text[150], text2[160];
	char word[20];
	int i1, i2;
	for (i1 = 0; t1[i1]; i1++) text[i1] = t1[i1]; i1++;
	for (i2 = 0; t2[i2]; i2++) word[i2] = t2[i2]; i2++;
	text[i1] = word[i2] = '\0';
	for (int i = 0; text[i]; i++) {
		if (text[i] == word[0]) {
			int j;
			for (j = 1; word[j] && text[i + j] == word[j]; j++);
			if (word[j] == '\0') {
				x = i;
				break;
			}
		}
	}
	if (x != -1) {
		int i3 = 0;
		for (; i3 < x; i3++) text2[i3] = text[i3];
		text2[x] = '"';
		i3 ++;
		for (int i = i3 - 1; i3 < i + i2; i3++) text2[i3] = text[i3 - 1];
		text2[i3] = '"';
		i3++;
		for (; i3 - 2 < i1; i3++) text2[i3] = text[i3 - 2];
		text2[i3] = '\0';
		for (int i = 0; i < i3; i++) cout << text2[i]; cout << endl;
	}
	else {
		for (int i = 0; text[i]; i++) cout << text[i];
		cout << endl;
	}
}
