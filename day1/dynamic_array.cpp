#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n] {23, 2};
    int i;
    for (i=2;i<n;i++){
    cin>>arr[i];
    }
    for (i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
