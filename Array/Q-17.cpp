
/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Input: prices = [7,1,5,3,6,4]
Output: 5
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int mini = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        mini = min(prices[i], mini);
        profit = max(profit, (prices[i] - mini));
    }
    return profit;
}
int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
    return 0;
}
