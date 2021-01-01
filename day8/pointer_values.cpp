#include <iostream>
using namespace std;

int main() {
   int x=10;
   int *p=&x;
   cout << *p << endl;
   x=x+20 ; // changing value doesnt chage pointer but its value using this pointer
   cout << *p <<endl;
   *p=*p+40; // we can also change using value using pointer
   cout << x ;
   return 0;
}
