//TODO:..Array Traversal in c++....
#include<iostream>
using namespace std;
int main(){
//!..[METHOD-1]....
    int arr[4]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
        cout<<arr[i] <<" ";
///////////////////////////////////////////////////////////////////////////
//comment the above before executing the below code....
///////////////////////////////////////////////////////////////////////////
//!..[METHOD-2]....
    int arr[4]={1,2,3,4};
    for(int x:arr)
        cout<< x <<" ";
    return 0;
}