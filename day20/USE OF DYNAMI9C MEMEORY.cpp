/* #include <iostream>
using namespace std;

int *fun() {
 int a=10;
 int *ptr=&a;
 return ptr;
}
int main() {
 int x,y;
 cout << *fun(); // when function is called it returns ptr which contains memory address of local variable so as soon as
                //function ends its variables are also dead so it gives a error
 return 0;
}
*/
#include <iostream>
using namespace std;

int *fun() {
 int *ptr=new int; // when we do dynamic memeory allocation we can use this memory anywhere in the program, scope limit ends
 *ptr=10;
 return ptr;
}
int main() {
 int x,y;
 cout << *fun();
 int *ptr=fun();
 delete ptr; // we should always deallocate our memory leak
 return 0;
}
