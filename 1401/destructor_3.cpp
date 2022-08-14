// example 3

#include <iostream>
using namespace std;

#define MAX 1000

int func(double &x) {
    double res = 0;
    int i;
    for(i = 2; res < x; i++) {
        double t = (1.00 / (i * 1.00));
        res += t;
    }
    return i - 2;
}

int main() {
    int ans[MAX];
    int size;
    for(size = 0; ; size++) {
        double temp;
        cin >> temp;
        if(!temp) break;
        ans[size] = func(temp);
    }

    for(int i = 0; i < size; i++)
        cout << ans[i] << " card(s)\n";

    // system("pause > nul");
    return 0;
}