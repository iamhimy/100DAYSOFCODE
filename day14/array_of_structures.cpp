#include <iostream>
using namespace std;

struct point {
 int x ;
 int y;
};
int main() {
 point arr[5];
 int i;
 for (i=0;i<5;i++){
    arr[i].x=i*2;
    arr[i].y=i*10;
 }
 for (i=0;i<5;i++){
    cout << arr[i].x << " " << arr[i].y<<endl;
 }
 return 0 ;
}

