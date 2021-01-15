#include <iostream>
using namespace std;

class sp {
  int *ptr;
  public :
      sp(int *p=NULL) { ptr=p;} //we create a contructor here as to create a ptr
      ~sp() { delete ptr;}
      int &operator *() { return *ptr;} // to directly use created object as pointer we use operator overloding
};
int main(){
  sp s(new int());
  *s=20;
  cout<<*s;
  return 0;
}
