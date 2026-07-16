#include <iostream>
#include <climits>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> getMinMax(vector<int> &arr)
    {
        int min = INT_MAX;
        int max = INT_MIN;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        return {min, max};
    }
};