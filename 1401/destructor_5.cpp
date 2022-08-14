// example 5

#include <iostream>
using namespace std;

void bsort(int arr[], int n) {
   int i, contSw;
   do {
        contSw = 0;
        n--; 
        for(i = 0; i < n;  i++) 
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]) ;
                contSw = 1;	          
            }
   } while (contSw) ;
}


int func(int arr[], int n, int m) {
    if(!m) return 0;
    bsort(arr, n);
    int result = 0;
    for(int i = 1; i <= m; i++)
        result += (arr[0] * arr[i]);
    return result;
}

int main() {
    int t;
    cin >> t;
    int m, n, ans[t];
    for(int i = 0; i < t; i++) {
        cin >> n >> m;
        int arr[n];
        for(int j = 0; j < n; j++) cin >> arr[j];
        ans[i] = func(arr, n, m);
    }

    for(int i = 0; i < t; i++)
        cout << ans[i] << endl;

    // system("pause > nul");
    return 0;
}