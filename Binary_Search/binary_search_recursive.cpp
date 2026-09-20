/*
Problem: Binary Search using Recursion

Given a sorted array and a target element, find the index
of the target using Recursive Binary Search.

Approach:
1. Find the middle element.
2. If arr[mid] == target, return mid.
3. If target > arr[mid], recursively search the right half.
4. If target < arr[mid], recursively search the left half.
5. If start becomes greater than end, the target is not present.

Example:
Array = {-1, 0, 3, 4, 5, 8, 12}
Target = 12
Output = 6

Time Complexity: O(log n)
Space Complexity: O(log n) due to recursion stack
*/

#include <iostream>
#include <vector>
using namespace std;

int RbinarySearch(vector<int> arr, int tar, int str, int end){

    if(str <= end){

        int mid = str + (end - str) / 2;

        if(tar > arr[mid]){
            return RbinarySearch(arr, tar, mid + 1, end);
        }
        else if(tar < arr[mid]){
            return RbinarySearch(arr, tar, str, mid - 1);
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

    cout << RbinarySearch(arr, tar, 0, arr.size() - 1) << endl;

    return 0;
}
