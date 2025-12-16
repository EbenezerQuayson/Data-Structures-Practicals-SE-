//Question 1
#include <iostream>
using namespace std;

int main(){
    // a. Create fixed-state array of capacity 7
    const int capacity = 7;
    int arr[capacity];
    int size = capacity;

    //Accept elements from user
    cout << "Enter 7 numbers into the array: " << endl;
    for(int i=0;  i< size; i++){
        cin >> arr[i]; //user enters elements
    }
    //Print array
    cout << "Original Array: " << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << endl; //print array
    }

    ///Inserting 3 at index 0
    int insertVal1 = 3;
    for(int i = size-1; i > 0; i--){
        arr[i] = arr[i-1]; // suppose i = 5, this statement would mean that arr[5] = arr[4], the element at index 4 would be shifted to index 5. Shifting to the right
    }
    arr[0] = insertVal1;

    cout << "Array after inserting 3 at index 0: " << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << "";
        cout << endl;
    }
    
   
   return 0;
}