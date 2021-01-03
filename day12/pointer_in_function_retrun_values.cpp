#include <iostream>
using namespace std;

void addmul(int x,int y,int *ptr1 , int *ptr2) {
     *ptr1=x+y;
     *ptr2=x*y;
}                    /* we can use pointers to scope a variable outside function and return multiple values
 by that function as the variables used inside function are pointers and they can be retireved in main function */
int main() {
    int x=10,y=20,a,m ;
    addmul(x,y,&a,&m);
    cout<<a<<" "<< m;
    return 0;
}
