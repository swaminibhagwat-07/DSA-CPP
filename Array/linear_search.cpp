/*
Problem: Linear Search

Given an array and a target element, find the index
of the target element in the array.

Approach:
1. Start from the first element of the array.
2. Compare each element with the target.
3. If the element matches the target, return its index.
4. If the target is not found after checking all elements,
   return -1.

Example:
Input:  {1, 2, 3, 4, 5}
Target: 3

Output:
Target found at index 2.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target){

    for(int i = 0; i < size; i++){

        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 3;

    int result = linear_search(arr, size, target);

    if(result != -1){
        cout << "Target found at index " << result;
    }
    else{
        cout << "Target not found";
    }

    return 0;
}
