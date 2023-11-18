//TODO:..SIZE OF AN ARRAY.......
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    return 0;
}