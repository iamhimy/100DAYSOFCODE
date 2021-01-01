#include <iostream>
#include <vector>
using namespace std ;

int &fun() {
    static int x=10;
    return x ; // here it become &fun()=x means x and fun() have same memory location and value and depend on each other
}
int main() {
    int &z = fun(); // here it means z and fun() have same memory loaction and value and hence all three x,fun(),z have same value and memory location
    cout << fun() << endl;
    z=20;
    cout << fun() ;
    return 0;
}
