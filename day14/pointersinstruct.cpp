#include <iostream>
using namespace std;

struct point {
 int x;
 int y;
};
int main(){
  point p={10,20};
  point *ptr=&p;
  cout << ptr->x <<endl;
  ptr->x = ptr->x+30;
  cout << p.x << " "<<p.y ;
  return 0;
}
