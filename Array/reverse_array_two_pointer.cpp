/*
Problem: Reverse an Array

Given an array, reverse the elements of the array.

Approach: Two Pointer / In-Place Swapping

1. Initialize start at the first index (0).
2. Initialize end at the last index (size - 1).
3. Swap the elements at start and end.
4. Move start one step forward.
5. Move end one step backward.
6. Continue until start becomes greater than or equal to end.

Example:
Input:  {3, 6, 9, 12, 20, 15, 10, 5}
Output: {5, 10, 15, 20, 12, 9, 6, 3}

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void reverseArr(int arr[], int size){

    int start = 0;
    int end = size - 1;

    while(start < end){

        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main(){

    int arr[8] = {3, 6, 9, 12, 20, 15, 10, 5};
    int size = 8;

    reverseArr(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
