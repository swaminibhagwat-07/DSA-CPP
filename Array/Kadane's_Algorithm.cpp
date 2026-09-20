/*
Problem: Maximum Subarray Sum

Approach:
1. Initialize currSum = 0 and maxSum = INT_MIN.
2. Traverse the array using one loop.
3. Add each element to currSum.
4. Update maxSum if currSum is greater than the current maxSum.
5. If currSum becomes negative, reset it to 0.
6. Continue until all elements are checked.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>& nums){
        int currSum =0,maxSum=INT_MIN;

        for(int val: nums){
            currSum += val;
            maxSum = max(currSum,maxSum);

            if(currSum<0){
                currSum=0;
            }
        }

        return maxSum;
    }
};

int main(){

    vector<int> nums = {-2, 3, -1, 5, -6};

    Solution obj;

    int ans = obj.maxSubArray(nums);

    cout << "Maximum subarray sum: " << ans << endl;

    return 0;
}
