/*
Problem: Sum of Elements in a 2D Array

Given a 2D array, take its elements as input,
display the matrix, and calculate the sum of all elements.

Approach:
1. Create a 2D array with rows and columns.
2. Use nested loops to take input for every element.
3. Use nested loops to display the matrix.
4. Traverse the matrix again and add each element to sum.
5. Print the final sum.

Example:
Input:
1 2 3
4 5 6

Output:
1 2 3
4 5 6

SUM: 21

Time Complexity: O(rows × columns)
Space Complexity: O(rows × columns)
*/

#include <iostream>
using namespace std;

int main(){

    int arr[2][3];
    int sum = 0;

    //Taking elements in 2D array
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    //Displaying 2D array
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Calculating sum of elements
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
    }

    cout << "SUM: " << sum;

    return 0;
}
