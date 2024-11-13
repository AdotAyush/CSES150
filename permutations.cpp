#include<iostream>
using namespace std;
main(){
    long n, i;
    cin >> n;
    if(n < 4 && n>1){
        cout << "NO SOLUTION";
    }else if(n == 1){
        cout << 1;
    }
    else if(n%2 == 0){
        for(i=1 ; i<=n ; i++){
            if(i%2 == 0){
                cout << i << " ";
            }
        }
        for(i=1 ; i<=n ; i++){
            if(i%2 == 1){
                cout << i << " ";
            }
        }
    }
    else if(n%2 == 1){
        for(i=1 ; i<=n ; i++){
            if(i%2 == 1){
                cout << i << " ";
            }
        }
        for(i=1 ; i<=n ; i++){
            if(i%2 == 0){
                cout << i << " ";
            }
        }
    }
}