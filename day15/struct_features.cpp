#include <iostream>
using namespace std;

struct point1 {
   int x;
   int y;
   point1(int a, int b) { //we can add constructors in sturctures and we can also add functions of that structure
   x=a;
   y=b;
   }
   void print() {
   cout <<x<<" "<< y<<endl;
   }
};
int main() {
   point1 p(10,20);
   p.print();
   return 0;
}
