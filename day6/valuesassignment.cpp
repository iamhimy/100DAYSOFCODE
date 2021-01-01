#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x=0, z=6;
    int &y=x ; // this creates a variable y with same memory location as x so both values becomes same and if one thing changes other changes too
    y=z;
    y=y+5;
    cout << x << y << z << endl; // changed y got same x as y
    x=x-3 ;
    cout << x << y << z ; // changed x got same y as x
    return 0;
}
