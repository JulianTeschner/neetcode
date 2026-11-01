#include <vector>
#include <algorithm>
#include <iostream>

// int trap(std::vector<int> &height)
// {
//     std::vector<int> suffix(height.size());

//     int max = 0;
//     for (int i = height.size() - 1; i >= 0; i--)
//     {
//         max = std::max(max, height[i]);

//         suffix[i] = max;
//     }
//     max = 0;
//     int min{0};
//     int res{0};
//     int cur{0};
//     for (int i = 0; i < height.size(); i++)
//     {
//         max = std::max(max, height[i]);
//         min = std::min(suffix[i], max);

//         cur = min - height[i];
//         if (cur > 0) {
//             res += cur;
//         }
//     }
//     return res;
// }

int trap(std::vector<int> &height)
{
    int l = 0;
    int r = height.size() - 1;
    int l_max{height[l]};
    int r_max{height[r]};
    int sum{0};
    int cur{0};

    while (l != r)
    {
        cur = 0;
        if (r_max < l_max)
        {
            cur = std::min(l_max, r_max) - height[r];
            r--;
        }
        else
        {
            cur = std::min(l_max, r_max) - height[l];
            l++;
        }
        if (cur > 0)
        {
            sum += cur;
        }
        l_max = std::max(l_max, height[l]);
        r_max = std::max(r_max, height[r]);
    }
    return sum;
}

int main()
{
    std::vector<int> height{0, 2, 0, 3, 1, 0, 1, 3, 2, 1};
    trap(height);
}