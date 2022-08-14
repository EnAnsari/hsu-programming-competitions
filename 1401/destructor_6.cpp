// example 6

#include <iostream>
using namespace std;

#define MAX 40

struct RESULT {
    RESULT() : max(0), count(0) {}
    int max;
    int count;
};

struct DATA {
    DATA() : size(0) {}
    int size;
    int arr[MAX];
    void push(int cur) {
        arr[size++] = cur;
    }
    bool isGood(bool matrix[MAX][MAX], int n, int cur) {
        for(int i = 0; i < size; i++)
            if(matrix[arr[i] - 1][cur - 1])
                return false;
        return true;
    }
};

void run(bool matrix[MAX][MAX], int n, int cur, DATA data, RESULT &res) {
    if(!data.isGood(matrix, n, cur)) return;
    if(cur) data.push(cur);
    if(data.size == res.max) res.count++;
    else if(data.size > res.max) {
        res.max = data.size;
        res.count = 1;
    }
    for(int i = cur + 1; i <= n; i++)
        run(matrix, n, i, data, res);
}

RESULT func(bool matrix[MAX][MAX], int n) {
    RESULT res;
    DATA data;
    run(matrix, n, 0, data, res);
    return res;
}

int main() {
    int n;
    cin >> n;
    bool matrix[MAX][MAX];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];

    RESULT res = func(matrix, n);
    cout << res.max << " " << res.count;

    // system("pause > nul");
    return 0;
}