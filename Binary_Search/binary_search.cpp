/*
Problem: Binary Search

Given a sorted array and a target element, find the index
of the target element using Binary Search.

Approach:
1. Set two pointers:
   start = 0
   end = n - 1
2. Find the middle index.
3. If arr[mid] == target, return mid.
4. If target > arr[mid], search in the right half.
5. If target < arr[mid], search in the left half.
6. If the target is not found, return -1.

Important:
Binary Search works only when the array is sorted.

Example:
Array = {-1, 0, 3, 4, 5, 8, 12}
Target = 12
Output = 6

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){

    int str = 0, end = arr.size() - 1;

    while(str <= end){

        int mid = str + ((end - str) / 2);

        if(tar > arr[mid]){
            str = mid + 1;
        }
        else if(tar < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }

    return -1;
}

int main(){

    vector<int> arr = {-1, 0, 3, 4, 5, 8, 12};
    int tar = 12;

    cout << binarySearch(arr, tar) << endl;

    return 0;
}
