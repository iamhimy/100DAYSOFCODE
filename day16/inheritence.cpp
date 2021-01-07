#include <iostream>
using namespace std;

class base {
 public:
     int x;
};
class derived: base {};

struct base1 {
 private:
     int x;
};
struct derived1 : base {};

int main() {
 derived d;
 d.x=10;
 cout<<d.x<<endl;
 derived1 d1;
 d1.x=10;     /* both cout will give error because inheritance in in class and struct are different as you can see being
           its base class public it din't inherit while due to its base class being private derived struct was also private */
 cout <<d1.x ;
 return 0;
}
