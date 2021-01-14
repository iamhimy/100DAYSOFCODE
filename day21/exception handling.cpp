#include <iostream>
using namespace std;

int average(int arr[], int n) throw(string) { //we can pre declare all types of exceptions function gonna throw while declaring a function
   if (n==0){
     throw string("array size is zero");
   }
   int sum=0;
   for (int i=0;i<n;i++){
     sum=sum+arr[i];
   }
   return sum/n;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    try {
      int x;
      x=average(arr,n);
      cout <<x << endl;
    }
    catch (string &e) { // we can also use catch (...) to catch all the other data types by the code fro each if-throw in try block
      cout << e <<endl;
    }
    cout << "bye" <<endl;
    return 0;

}
