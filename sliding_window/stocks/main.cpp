#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <cctype>
#include <algorithm>

int maxProfit(std::vector<int> &prices)
{
    int l{0};
    int r{1};
    int price{0};
    while (r != prices.size())
    {
        if (prices[r] < prices[l])
        {
            l = r;
            r += 1;
        }
        else
        {
            int cur = prices[r] - prices[l];
            if (cur >= price)
            {
                price = cur;
            }
            r++;
        }
    }
    return price;
}

int main()
{
    std::vector<int> prices{7, 1, 5, 3, 6, 4};
    maxProfit(prices);
}