//TODO:..Check If Array Is Sorted or Not................
#include<iostream>
using namespace std;

//!..Declaring arr[] and int n in bool .....

bool check_if_sorted(int arr[], int n) {
//!..Giving case to loop to check if Array is it is sorted...
    for(int i=1; i<n; i++) {
        if(arr[i] < arr[i-1])
           return false;
    }
    return true;
}
//...Main function....
int main() {
    int n;
    cin>>n;
//Taking arr of n element inside it....
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
//!.If case loop is false then this loop will running
    if(check_if_sorted(arr,n)==false) 
      cout<<"Not Sorted";
    else 
       cout<<"Sorted";

    return 0;
}