#include <iostream>
using namespace std;

void swap(int &x, int &y) //parameters in c++ are passed by values not location so if swap(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main() {
    int x=10, y=15 ;
    swap(x,y);
    cout<<x<<y; // the ouput eill be 15,10 whilw if we dont use reference output will be 10,15
    return 0;
}