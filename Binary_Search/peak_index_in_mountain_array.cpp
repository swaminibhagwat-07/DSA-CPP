/*
Problem: Peak Index in Mountain Array

Given a mountain array, find the index of the peak element.

A mountain array first increases and then decreases.

Example:
Input:
{3, 6, 9, 12, 15, 10, 5, 1}

Output:
4

Peak element = 15

Approach:
1. Use Binary Search between index 1 and n-2.
2. Find the middle element.
3. If A[mid] is greater than both neighbors, it is the peak.
4. If A[mid] < A[mid+1], we are on the increasing side,
   so move to the right.
5. Otherwise, we are on the decreasing side,
   so move to the left.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    int peakIndexInMountainArray(vector<int>& A){

        int st = 1, end = A.size() - 2;

        while(st <= end){

            int mid = st + (end - st) / 2;

            if(A[mid-1] < A[mid] && A[mid] > A[mid+1]){
                return mid;
            }
            else if(A[mid-1] < A[mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return -1;
    }
};

int main(){

    Solution s;

    vector<int> A = {3, 6, 9, 12, 15, 10, 5, 1};

    cout << s.peakIndexInMountainArray(A);

    return 0;
}
