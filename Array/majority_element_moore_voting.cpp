/*
Problem: Majority Element

Given an array of size n, find the element that appears
more than n/2 times.

Approach: Moore's Voting Algorithm

1. Initialize freq = 0 and ans = 0.
2. Traverse the array.
3. If freq becomes 0, consider the current element as
   the new majority candidate.
4. If the current element is equal to the candidate,
   increase freq.
5. Otherwise, decrease freq.
6. The remaining candidate is the majority element.

Example:
Input:  {2, 2, 1, 1, 1, 2, 2}
Output: 2

The element 2 appears 4 times out of 7 elements,
so it is the majority element.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int freq = 0, ans = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(freq == 0) {
                ans = nums[i];
            }

            if(ans == nums[i]) {
                freq++;
            }
            else {
                freq--;
            }
        }

        return ans;
    }
};

int main() {

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    Solution obj;

    int result = obj.majorityElement(nums);

    cout << "Majority Element = " << result << endl;

    return 0;
}
