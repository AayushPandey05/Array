#include<iostream>
using namespace std;

int search(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare an array of size n

    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;

    int result = search(arr, n, x);
    cout<<result;
}