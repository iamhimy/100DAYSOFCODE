#include <iostream>
using namespace std ;

struct s {
 double d1;
 char c1;
 char c2;
}__attribute__((packed)); // we specify the compliers to campact represent the structure so this gives 10 as output

int main() {
  cout <<sizeof(s);
}
