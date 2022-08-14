// example 2

#include <iostream>
using namespace std;

#define MAX 10000

string convertInt(int number) {
    if (number == 0)
        return "0";
    string temp = "";
    string returnvalue = "";
    while (number > 0) {
        temp += number % 10 + 48;
        number /= 10;
    }
    for (int i=0;i< temp.length(); i++)
        returnvalue += temp[temp.length() - i -1];
    return returnvalue;
}

void func(string &str, string &temp) {
    for(int i = 0; temp[i];) {
        int count = 0;
        char key = temp[i];
        for(int j = i; temp[j] == key; j++) i++, count++;
        str += convertInt(count);
        str += key;
    }
}

int main() {
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        func(arr[i], str);
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;

    // system("pause > nul");
    return 0;
}