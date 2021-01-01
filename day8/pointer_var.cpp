#include <iostream>
using namespace std;

int main(){
   int x=10;
   int  *ptr=&x; // or int* ptr=&x is a method to create a "ptr" variable that can contain a memory address as a value (remember this ptr variable also is stored in some different address)
   cout<< ptr<<endl;
   cout<< *ptr ; // using * before a created  pointer variable gives values at location of ptr variable value i.e value at location which is stored in pointer variable
   return 0;
}
