#include <iostream>
using namespace std;

union t{
 int x;
 int y;
};    /* union is same as struct and class ,only difference is that it takes space = biggest datatype in itsels
      & stores every other datatype in same location. */
union d {
 int x;
 double y;
};
int main() {
 cout << sizeof(t) <<endl ;
 cout << sizeof(d) ;
}
