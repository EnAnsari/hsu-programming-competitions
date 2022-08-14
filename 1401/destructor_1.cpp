// example 1

#include <iostream>
using namespace std;

bool check(string &str) {
    int l;
    for(l = 0; str[l + 1]; l++);
    for(int i = 0; i < l; i++, l--)
        if(str[i] != str[l]) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    bool ans[n];
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        ans[i] = check(str);
    }

    for(int i = 0; i < n; i++)
        if(ans[i]) cout << "YES" << endl;
        else cout << "NO" << endl;

    // system("pause > nul");
    return 0;
}