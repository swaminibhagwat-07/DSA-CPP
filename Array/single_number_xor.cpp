/*
Problem: Single Number

Given an array where every element appears twice except
one element, find the element that appears only once.

Approach: XOR

1. Initialize ans = 0.
2. Traverse every element of the array.
3. XOR each element with ans.
4. XOR has the following properties:
   - x ^ x = 0
   - x ^ 0 = x
5. Therefore, all repeated elements cancel each other,
   leaving only the unique element.

Example:
Input:  {4, 1, 2, 1, 2}
Output: 4

Because:
4 ^ 1 ^ 2 ^ 1 ^ 2 = 4

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    int singleNumber(vector<int>& nums){

        int ans = 0;

        for(int val : nums){
            ans = ans ^ val;
        }

        return ans;
    }
};

int main(){

    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;

    cout << "Single Number = " << obj.singleNumber(nums);

    return 0;
}
