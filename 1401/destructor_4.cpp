// example 4

#include <iostream>
using namespace std;

#define MAX 1000

void func(char temp[], char str[], int n) {
    for(int i = 0, j = 0; i < n; i++) {
        temp[j++] = str[n + i];
        temp[j++] = str[i];
    }
    temp[2 * n] = 0;
}

bool equalchar(char a[], char b[]) {
    int i;
    for(i = 0; a[i] && b[i]; i++)
        if(a[i] != b[i]) return false;
    if(a[i] || b[i]) return false;
    return true;
}

int check(char str[], char x[], int n, int step) {
    if(step > 50) return -52;
    if(equalchar(str, x)) return 0;
    char temp[2 * n + 1];
    func(temp, str, n);
    return 1 + check(temp, x, n, ++step);
}

int main() {
    int n;
    int ans[MAX];
    int size = 0;
    for(;; size++) {
        cin >> n;
        if(!n) break;
        char x1[n + 1], x2[n + 1], x[2 * n + 1], str[2 * n + 1];
        cin >> x1 >> x2 >> x;
        int j;
        for(j = 0; j < n; j++) str[j] = x1[j], str[n + j] = x2[j];
        str[2 * n] = 0;
        ans[size] = check(str, x, n, 0);
    }

    for(int i = 0; i < size; i++)
        cout << ans[i] << endl;

    // system("pause > nul");
    return 0;
}