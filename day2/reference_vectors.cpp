#include <iostream>
using namespace std;

void print(vector<int> &v) // by adding reference we dont need to access/copy whole v just for sake of parameter
{
    for (auto x: v){
        cout<<x<<" ";
    }
}
int main() {
    vector<int> v;
    int i;
    for (i=0;i<1000;i++){
        v.pushback(i);
    }
    print(v); // we save cpu time by usin reference variable which has already all the values even when used as parameter
    return 0;
}