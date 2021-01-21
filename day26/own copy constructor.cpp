#include <iostream>
using namespace std;

class test {
 int *ptr;
 public :
     test(int x){ptr=new int(x);}
     test(const test &t) {
         int val= *(t.ptr) ;
         ptr= new int(val);
    }
     void set(int x) { *ptr=x;}
     void print() { cout << *ptr << " ";}
};

// now it does deep copy because when we call copy constructor it automatically copies the value at new location first


int main(){
  test t1(10);
  test t2(t1); //test t2=t1
  t2.set(20);
  t1.print();
  t2.print();
  return 0;
}

