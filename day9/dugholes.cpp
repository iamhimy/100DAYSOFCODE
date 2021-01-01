#include <iostream>
using namespace std ;

int main() {
  int *p; // if we dont initialise our pointer variable then it takes a memory loaction but a random value
  cout << p << endl;
  cout << *p;
  return 0;
}
