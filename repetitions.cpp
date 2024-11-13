#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    long lar = 1, num = 1;

    for (size_t i = 1; i < a.length(); i++) {
        if (a[i] == a[i - 1]) {
            num++;  
        } else {
            lar = max(lar, num);  
            num = 1;  
        }
    }

    lar = max(lar, num); 
    cout << lar;

    return 0;
}
