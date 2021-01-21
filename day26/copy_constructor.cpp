#include <iostream>
using namespace std;

class test {
 int *ptr;
 public :
     test(int x){ptr=new int(x);}
     void set(int x) { *ptr=x;}
     void print() { cout << *ptr << " ";}
};

/* here compiler calls an default copy constructor and copies and due to that t1 also gets affected if we change t2 it does a
 shallow copy */


int main(){
  test t1(10);
  test t2(t1); //test t2=t1
  t2.set(20);
  t1.print();
  t2.print();
  return 0;
}
