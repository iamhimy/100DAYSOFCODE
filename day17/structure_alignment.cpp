#include <iostream>
using namespace std;

struct s1 {
 char c1;
 double d1;
 char c2;
};
struct s2 { /* except char all other data types have allignment requirements. Also allignment requirements are decided by largest
             member requirements */
 char c1;
 char c2;
 double d2;
};
int main() {
  cout << sizeof(s1) <<endl; /*if largest member takes 8 bytes then its address starts with a multiple of 8 similarly for 4 byte
                  so like here for s1 first char c1 takes 1 byte then to give largest member double address location of multiple
                  of 8 we give extra 7 bytes after c1 then 8 bytes for double thren 1 byte for c1 then 7 bytes = 24 bytes */
  cout << sizeof(s2) ; /* for s2 c1 takes 1 byte but as c1 doesn't have allignment requirements next c1 takes 1 byte then 6 byte
                        to give double a divisble of 8 address then 8 bytes for double itself = 16 bytes */
  return 0;
}
