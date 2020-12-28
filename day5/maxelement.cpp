#include <iostream>
#include <vector>
#include <numeric>
using namespace std ;

int main() {
     int arr[] {1,2,6,8,23,54,76,55};
     n=sizeof(arr)/sizeof(arr[0]);
     x=*max_element(arr,arr+n);
     cout << x ;
}
