#include <iostream>
#include <string.h>
#include <string>
using namespace std;

void reverse(string s,string r) {
   if (s==""){
     cout << r;
     return ;
   }
   r=s[0]+r ;
   s=s.substr(1);
   reverse(s,r);
}

int main () {
  string s,r;
  getline(cin,s);
  reverse(s,r);
  return 0;
}
