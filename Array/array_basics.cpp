#include <iostream>
using namespace std;

int main(){

    int n;   //size of array

    //Taking size of array
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];   //array declare

    int index, update;

    //Taking elements in array
    cout << "Enter elements in array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //Displaying elements in array
    cout << "Elements in array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Accessing an element
    cout << "Enter index of element you want to access (0-" << n-1 << "): ";
    cin >> index;

    cout << "Element at index " << index << " is ";
    cout << arr[index] << endl;

    //Updating an element
    cout << "Enter index of element you want to update and enter new element: ";
    cin >> index >> update;

    arr[index] = update;

    //Displaying array after updation
    cout << "Elements in array after updation: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
