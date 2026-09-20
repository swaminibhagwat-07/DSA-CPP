/*
Problem: Pair Sum

Given a sorted array and a target value, find the indexes
of two elements whose sum is equal to the target.

Approach: Two Pointer

1. Initialize one pointer at the beginning (i = 0).
2. Initialize another pointer at the end (j = n - 1).
3. Calculate the sum of elements at i and j.
4. If the sum is greater than the target, move j to the left.
5. If the sum is smaller than the target, move i to the right.
6. If the sum equals the target, return the two indexes.
7. Continue until i becomes greater than or equal to j.

Example:
Input:  {2, 7, 11, 15}
Target: 9

Output:
Indexes: 0, 1

Because:
2 + 7 = 9

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){

    vector<int> ans;

    int n = nums.size();
    int i = 0, j = n - 1;

    while(i < j){

        int pairSum = nums[i] + nums[j];

        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main(){

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(nums, target);

    if(ans.size() == 2){
        cout << "Indexes: " << ans[0] << ", " << ans[1] << endl;
    }
    else{
        cout << "Pair not found." << endl;
    }

    return 0;
}
