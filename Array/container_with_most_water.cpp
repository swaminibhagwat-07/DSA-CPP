/*
Problem: Container With Most Water

Given an array where each element represents the height
of a vertical line, find two lines that together with the
x-axis form a container that can hold the maximum amount
of water.

Approach: Two Pointer

1. Initialize a left pointer (lp) at the first element.
2. Initialize a right pointer (rp) at the last element.
3. Calculate the width between the two pointers.
4. The height of the container is the smaller of the two
   heights.
5. Calculate the current water:
   height × width.
6. Update maxWater if the current water is greater.
7. Move the pointer having the smaller height inward,
   because moving the taller pointer cannot increase the
   container height.
8. Continue until lp and rp meet.

Example:
Input:  {1, 8, 6, 2, 5, 4, 8, 3, 7}
Output: 49

Maximum water = 49.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:

    int maxArea(vector<int>& height){

        int maxWater = 0;
        int lp = 0, rp = height.size() - 1;

        while(lp < rp){

            int w = rp - lp;
            int ht = min(height[lp], height[rp]);

            int currWater = ht * w;

            maxWater = max(currWater, maxWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxWater;
    }
};

int main(){

    Solution s;

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Maximum Water = " << s.maxArea(height);

    return 0;
}
