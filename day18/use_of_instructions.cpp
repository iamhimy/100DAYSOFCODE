#include <iostream>
using namespace std;

struct s3 {
 char c1;
 char c2;
 double d1; /* use of allignment is that because of 32 bits vs 64 bits systems reading 4 bytes vs 8 bytes in one cycle it
          becomes difficult if we read 8 bytes in first cycle including 2 bytes of c1 and c2 and 6 bytes of d1 then again we
        have to go for second cycle to read remaining 2 bytes of d1. so if we use allignment we will go 8 bytes in 1st cycle
        including 2 bytes of c1 and c2 and 6 bytes of free space then 8 bytes of d1 this way we can read whole d1 in 1 cycle*/
};

int main() {
  cout << sizeof(s3) << endl ;
  return 0;
}
