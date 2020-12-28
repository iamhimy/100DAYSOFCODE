#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int arr[] {1,2,3,4,5,6,7,8,9} ;
    int n,i,sum=0;
    n=sizeof(arr)/sizeof(arr[0]); // sizeof funcction gives actual size in bits so 'total bits/ bits of single element' gives no. of elements
    for (i=0;i<n;i++){
        sum=sum+arr[i] ;
    }
    cout << sum << endl ;
    int sum1=0;
    sum1=accumulate(arr,arr+n,sum1); // we can use accumulate function to directly find sum the only condition is  you have to give the intial variable inside it
    cout<< sum1 << endl ;
    vector <int> v {1,2,3,4,5,6,7,8,9,10} ;
    int sum2;
    sum2= accumulate(v.begin(),v.end(),sum2) ; // we can use accumulate in vector too
    cout << sum2 << endl ;
    return 0;
}
