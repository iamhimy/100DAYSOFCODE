#include <iostream>
using namespace std;
class complex { // class is like a datatype
 private :
     int real;
     int img;
 public :
    void print(){
     cout << real << "+i" << img<<endl;
    }
    complex(int r, int i){ //we create constructor with same name as class to create an object
     real=r;
     img=i;
    }
};
int main(){
  complex c(10,20);//when we create variable of class it is called an object here c is an object
  c.print();
  return 0;
}
