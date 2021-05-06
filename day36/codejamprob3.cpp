#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}



int main() {
    int t;
    cin >> t;
    for (int q=0;q<t;q++){
            int x=0,y=0;
            cin >> x >> y ;
            if ((y<x-1) || (y>factorial(x))){
                cout << "Case #"<<q+1<<": " << "IMPOSSIBLE" <<endl;
            }
            else {
                if
                cout << "Case #"<<q+1<<": " << res <<endl;
            }
    }
    return 0;
}
