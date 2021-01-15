#include <iostream>
using namespace std;

template<class t> //we use a template to define any data type (here t) for ptr , also we can create this t class i.e our own datatype
class sp {
  t *ptr;
  public :
      sp(t *p=NULL) {ptr=p;}
      ~sp() { delete ptr;}
      t &operator *() { return *ptr;}
      t *operator ->(){return ptr;}
};
int main() {
  sp<int> sp(new int()); // this template helps here
  *sp=20;
  cout<<*sp;;
  return 0; /*the only problem with this smart pointers is that if we create multiple pointers for single location
   it deletes the location with original pointer and other pointers give garabage value*/
}

/* we have also three special smart pointers inside <memory> library :
   1.unique pointer
   2.shared pointer
   3.weak pointer                             */

