#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n=0,x=0;
    cin >> n ;
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0 && i<10){
            if (x<(n/i)) {
               x=max(i,n/i);
            }
        }
    }
    cout << x;
    return 0;
}
