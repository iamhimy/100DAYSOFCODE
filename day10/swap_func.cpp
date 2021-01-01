#include <iostream>
using namespace std ;

void swap(int *p1, int *p2) { // similarly to references if we have to create a function just of our own values usinf pointers is a good idea
   int temp=*p1;
   *p1=*p2;
   *p2=temp;
}
int main() {
    int x=10,y=20;
    swap(&x,&y);
    cout << x << " " << y ;
    return 0;
}
