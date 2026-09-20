/*
Problem: Find Largest and Smallest Element in an Array

Given an array, find the smallest and largest element
along with their indexes.

Approach:
1. Initialize smallest as INT_MAX and largest as INT_MIN.
2. Traverse the array using one loop.
3. If the current element is smaller than smallest,
   update smallest and store its index.
4. If the current element is greater than largest,
   update largest and store its index.
5. Check whether the current element is equal to the target.
6. Continue until all elements are checked.

Example:
Input:  {3, 4, 2, 5, 7, 3, 9}

Smallest element: 2
Smallest element index: 2

Largest element: 9
Largest element index: 6

Target: 4

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[7] = {3, 4, 2, 5, 7, 3, 9};
    int size = 7;

    int sindex, lindex;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int target = 4;
    bool found = false;

    for (int i = 0; i < size; i++) {

        if (arr[i] < smallest) {
            smallest = arr[i];
            sindex = i;
        }

        if (arr[i] > largest) {
            largest = arr[i];
            lindex = i;
        }

        if (arr[i] == target) {
            found = true;
        }
    }

    cout << "The smallest number is: " << smallest
         << " its index is " << sindex << endl;

    cout << "The largest number is: " << largest
         << " its index is " << lindex << endl;

    if (found) {
        cout << "Target " << target << " is present in the array.";
    }
    else {
        cout << "Target " << target << " is not present in the array.";
    }

    return 0;
}
