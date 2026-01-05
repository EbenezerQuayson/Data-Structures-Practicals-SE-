//Question 1
#include <iostream>
using namespace std;

int main(){
    // a. Create fixed-state array of capacity 7
    const int CAPACITY = 7;
    int arr[CAPACITY];
    int size = 5; //current size of the array

    //Accept elements from user
    cout << "Enter " << size << " numbers into the array: " << endl;
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
    if(size < CAPACITY){
         for(int i = size; i > 0; i--){
        arr[i] = arr[i-1]; // suppose i = 5, this statement would mean that arr[5] = arr[4], the element at index 4 would be shifted to index 5. Shifting to the right
    }
    arr[0] = insertVal1;
        size++; //increase size by 1 to accommodate new element
    }
   

    cout << "Array after inserting 3 at index 0: " << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << "";
        cout << endl;

    }

    //Inserting 8 at the end
    int insertVal2 = 8;
   if(size < CAPACITY){
        arr[size] = insertVal2; //insert at the end
        size++; //increase size by 1
    }
    cout << "Array after inserting 8 at the end: " << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << "";
        cout << endl;
    }

    //d. Delete element at index 2 using shift-left deletion
    for(int i = 2; i< size - 1; i++){
        arr[i] = arr[i + 1]; //shift left deletion
    }
    size --;

    cout << "Array after deleting element at index 2: " << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << "";
        cout << endl;

    }


    //e. Linear search for value 6
    int searchVal = 6;
    int index = -1; //initialize index to -1, meaning not found
    for(int i = 0; i<size; i++){
        if(arr[i] == searchVal){
            index = i; //if found, set index to the current index
            cout << "Value " << searchVal << " found at index: " << index << endl;
            break; //exit loop once found
        }
    }
   
   return 0;
}