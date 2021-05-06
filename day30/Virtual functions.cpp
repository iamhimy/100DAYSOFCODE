#include <iostream>
using namespace std;

class base{
   public :
       virtual void func() { cout << "base type" << endl;}
       // if we remove virtual keyword from here then b->func will print "base type" because if we don't specify then runtime
       // polymorphism(function overriding specifically) occurs which decide to use class of pointer than class which it is assigned to.
};
class derived : public base {
   public:
       void func() { cout << "derived type" << endl;}

};
int main () {
   base *b = new derived ;
   derived d;
   b->func();
   d.func();
   return 0;
}
