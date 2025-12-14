#include <iostream>
using namespace std;

int main(){
    const int capacity = 7;
    int arr[capacity]; 
    int count_num = 0;
    cout << "Enter 5 numbers into the array: " << endl;
    for(int i=0;  i< 5; i++){
        cin >> arr[i]; //user enters elements
        count_num++;
    }
    cout << "Original Array: ";
    for(int i=0; i<count_num; i++){
        cout << arr[i] << " "; //print array
    }

    //Inserting 3 at index 0
    //Shifting elements to the right
    for(int i= count_num-1; i>0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = 3;
    count_num++;
    cout << "Array after inserting 3 at index 0: ";
    for(int i=0; i<count_num; i++){
        cout << arr[i] << " "; //print array
    }
}