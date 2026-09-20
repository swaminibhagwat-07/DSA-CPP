/*
Problem: Product of Array Except Self

Given an array, return an array where ans[i] is the
product of all elements except nums[i].

Approach: Prefix and Suffix Product

1. Store the product of all elements to the left of i
   in ans[i].
2. Traverse from right to left and maintain the product
   of all elements to the right.
3. Multiply the right product with ans[i].
4. This gives the product of all elements except nums[i].

Example:
Input:  {2, 4, 6, 8}
Output: {192, 96, 64, 48}

For example:
ans[0] = 4 × 6 × 8 = 192
ans[1] = 2 × 6 × 8 = 96

Time Complexity: O(n)
Space Complexity: O(1) extra space
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    vector<int> productExceptSelf(vector<int>& nums){

        int n = nums.size();
        vector<int> ans(n, 1);

        int prefix = 1;

        // Store product of elements on the left
        for(int i = 0; i < n; i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;

        // Multiply with product of elements on the right
        for(int i = n - 1; i >= 0; i--){
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};

int main(){

    Solution s;

    vector<int> nums = {2, 4, 6, 8};

    vector<int> ans = s.productExceptSelf(nums);

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}
