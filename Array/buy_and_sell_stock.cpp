/*
Problem: Best Time to Buy and Sell Stock

Given an array where prices[i] represents the stock price
on day i, find the maximum profit that can be achieved
by buying on one day and selling on a later day.

Approach:
1. Initialize best_buy with the price of the first day.
2. Initialize maxProfit = 0.
3. Traverse the array.
4. If the current price is greater than best_buy,
   calculate the profit by selling at the current price.
5. Update maxProfit with the maximum profit found so far.
6. Update best_buy with the minimum price seen so far.
7. Continue until all prices are checked.

Example:
Input:  {7, 1, 5, 3, 6, 4}
Output: 5

Buy at price 1 and sell at price 6.

Maximum Profit = 6 - 1 = 5

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Best_Buy_stock {
public:

    int max_profit(vector<int>& prices) {

        int best_buy = prices[0];
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++) {

            if(prices[i] > best_buy) {
                maxProfit = max(maxProfit, prices[i] - best_buy);
            }

            best_buy = min(best_buy, prices[i]);
        }

        return maxProfit;
    }
};

int main() {

    Best_Buy_stock s;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = " << s.max_profit(prices);

    return 0;
}
