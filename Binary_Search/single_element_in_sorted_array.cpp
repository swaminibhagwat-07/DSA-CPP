/*
Problem: Single Element in a Sorted Array

Given a sorted array where every element appears twice
except one element, find the element that appears only once.

Approach:
1. Use Binary Search.
2. In a correctly paired portion:
   - Even index should be the first element of a pair.
   - Odd index should be the second element of a pair.
3. If the pair pattern is correct, the single element
   lies on the right side.
4. Otherwise, the single element lies on the left side.
5. Handle the first and last elements separately.

Example:
Input:
{1,1,2,2,4,4,5,5,8}

Output:
8

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int SingleNonDuplicate(vector<int>& A){

        int n = A.size();

        if(n == 1)
            return A[0];

        int st = 0, end = n - 1;

        while(st <= end){

            int mid = st + (end - st) / 2;

            if(mid == 0 && A[0] != A[1])
                return A[mid];

            if(mid == n - 1 && A[n-1] != A[n-2])
                return A[mid];

            if(A[mid-1] != A[mid] && A[mid] != A[mid+1])
                return A[mid];

            if(mid % 2 == 0){ // even

                if(A[mid-1] == A[mid]){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }
            else{ // odd

                if(A[mid-1] == A[mid]){
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

    vector<int> A = {1,1,2,2,8,4,4,5,5};

    cout << s.SingleNonDuplicate(A);

    return 0;
}
