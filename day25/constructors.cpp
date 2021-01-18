#include <iostream>
using namespace std;

class test1
{
  public :
      test1() { cout << "hii" << endl;}
      test1(int x) { cout << "bye" << endl;}

};
class man {
    test1 t;
    public :
        man(){ t=test1(10);}
        //man(){t:test1(10);}
        /*if we use initialiser list here instead of constructor then only hii will print because constructor always take a
        random/dfault value then are initialised while initialiser is directly initialised */
};
int main() {
 man m ;
 return 0;
}
