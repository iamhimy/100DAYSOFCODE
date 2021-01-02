#include <iostream>
#include <vector>
using namespace std;

void fun(vector <int> v){
    for (auto x : v){
        cout << x << endl; // this first copies all the 1000 values then use these values
    }
}
void func(vector <int> *v){
    for (auto x : v){
        cout << x << endl; // this directly use values from memory location so it saves the copy time
    }
}
int maain() {
   vector <int> v;
   for (i=0;i<1000;i++){
        v.pushback(i);
   }
   fun(v);
   func(&v);
   return 0;
}
