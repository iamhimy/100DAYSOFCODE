#include <iostream>
using namespace std;

class person {
  protected :
      int id;
      string name;
};
class student : public person{// while taking inheritance from sperclass we can specify how it is inherited (public/private/protected)
  public :
      int marks;
      student(int n, string s){ id=n;
      name=s;
      }
      void print() { cout << name << " " << id << " " << marks ;}

};
int main () {
   student s(123,"Rohan");
   s.marks=40;
   s.print();
   return 0;
}
