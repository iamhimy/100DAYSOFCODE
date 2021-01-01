#include <iostream>
using namespace std ;

int main() {
  int *p;
  double *p1;
  string *p2;
  cout << (sizeof p) << endl;
  cout << (sizeof p1)<<endl;
  cout << (sizeof p2)<< endl; // here sizeof varaiables doesnt change because pointer is an address eventually
  return 0;
}
