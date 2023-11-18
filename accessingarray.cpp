//TODO:..Accessing the array element using indexcs........
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40}; //!..ELEMENT 1..
    cout<<arr[2]<<" "<<arr[0]<<"\n";
    
    arr[2]=50; //!..iT WILL MODIFY THE ELEMENT 1 BY REPLACING 30 BY 50 AS 30 IS AT NUMBER 2..
    cout<<arr[2]<<"\n";
    return 0;
}
