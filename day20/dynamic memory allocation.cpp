 #include <iostream>
using namespace std;

int main() {
  static int a;
  int *pt = new int; //DYNAMIC MEMEORY ALLOCATION MEANS creating SOME MEMORY LOCATION JUST FOR OURSELVES SO THAT WE DON'T DEPEND ON COMPILER
  *pt=1;
  cout << *(pt) << endl;
  int *ptr = new int[5] ; //we get a hold of this personal memory using pointer
  *(ptr+1)=32; // AFTER CREATING we can use this locations to store our values which do not depend on SCOPE
  cout << *(ptr+1);
  delete [] ptr; // we can also delete our created memory
  ptr=NULL; // after deleting our pointer start pointing to a garbage value so to avoid we should always give it a null value
}
