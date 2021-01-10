#include <iostream>
using namespace std;

union test {
 int x;
 float y;
};
union deck {
 int x ;
 char arr[3];
};
int main() {
 test t ;
 t.y=1.1;
 cout << t.x << endl; /* because both x and y share same location if we don't give initilisation to x it takes value of y in different
             format, this is called type puning */
 deck d;
 d.x=256;
 cout << (int)arr[0] << " " << (int)arr[1] << " " << (int)arr[2] ;
 // similarly arr have same loaction as x so it will give value of 256 in binary and each elemnt of array will contain 1 bit
 return 0;
}
