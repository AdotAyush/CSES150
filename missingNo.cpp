#include<iostream>
using namespace std;
int main() {
    long n, sum=0, real_sum;
    cin >> n;
    long a[n-1];
    for(int i=0 ; i<n-1 ; i++){
        cin >> a[i];
        sum += a[i];

    }
    real_sum = (n * (n+1))/2;
    cout << (real_sum-sum);
    return 0;
}