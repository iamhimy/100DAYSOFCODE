 // CLASS VS STRUCTURES

#include <iostream>
using namespace std;

class point {
   int x;
   int y;
};

struct point1 {
   int x;
   int y;
};

class point2 {
   public:
       int x;
       int y;
};

int main() {
    point1 p1;
    p1.x=10;
    cout << p1.x ; // it will give output as 10

    point p;
    p.x=10 ;
    cout << p.x ;b //it will give error as in class objects are private by default and in structures objects are public by default


    point2 p2;
    p2.x=10;
    cout << p2.x; // now it wont give error as we can make a class public and a struct private
    return 0;
}
