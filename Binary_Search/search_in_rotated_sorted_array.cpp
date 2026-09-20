/*
Problem: Search in Rotated Sorted Array

Given a sorted array that has been rotated, find the index
of the target element.

Approach:
1. Find the middle element.
2. Check if the target is at mid.
3. Determine which half of the array is sorted.
4. If the left half is sorted:
   - Check whether the target lies in the left half.
   - If yes, search left.
   - Otherwise, search right.
5. Otherwise, the right half is sorted:
   - Check whether the target lies in the right half.
   - If yes, search right.
   - Otherwise, search left.
6. Return -1 if the target is not found.

Example:
Input:
A = {8, 9, 10, 11, 1, 2, 3}
Target = 10

Output:
2

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    int search(vector<int>& A, int tar){

        int st = 0, end = A.size() - 1;

        while(st <= end){

            int mid = st + (end - st) / 2;

            if(A[mid] == tar){
                return mid;
            }

            // Left half is sorted
            if(A[st] <= A[mid]){

                if(A[st] <= tar && tar <= A[mid]){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }

            // Right half is sorted
            else{

                if(A[mid] <= tar && tar <= A[end]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main(){

    Solution s;

    vector<int> A = {8, 9, 10, 11, 1, 2, 3};
    int tar = 10;

    cout << s.search(A, tar);

    return 0;
}
