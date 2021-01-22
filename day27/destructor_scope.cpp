#include <iostream>
using namespace std;

class test {
    int x;
  public :
      test(int i) : x(i){ cout << "constructor called"<< x <<endl;}
      ~test() { cout << "destructor is called" << x <<endl;}
};
int main() {
 test t1(10); //here the scope of both are same so first constructor then another constructor then its destructor then starting destructor
 test t2(20);
}
