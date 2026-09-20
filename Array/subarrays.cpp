/*
Problem: Print All Subarrays

Given an array, print all possible contiguous subarrays.

Approach:
1. Use the outer loop to select the starting index (st).
2. Use the second loop to select the ending index (end).
3. Use the third loop to print all elements from st to end.
4. Continue until all possible starting and ending positions are covered.

Example:
Input:
{1, 2, 3}

Output:
1
1 2
1 2 3
2
2 3
3

Total number of subarrays = n * (n + 1) / 2

Time Complexity: O(n^3)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for(int st = 0; st < n; st++){

        for(int end = st; end < n; end++){

            for(int i = st; i <= end; i++){
                cout << arr[i] << " ";
            }

            cout << " ";
        }

        cout << endl;
    }

    return 0;
}
