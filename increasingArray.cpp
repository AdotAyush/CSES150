#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;
    long num=0, i, a[n];
    for(i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for (i = 1; i < n; i++) {
        long j = i-1;
        if(a[i] < a[j]) {
            num += a[j] - a[i];
            a[i] = a[i-1];
        }
    }
    cout << num;
    return 0;
}