class Solution
{
public:
    vector<int> leaders(vector<int> &arr)
    {
        // code here
        vector<int> ans;

        ans.push_back(arr[arr.size() - 1]);

        int maxi = INT_MIN;
        for (int i = arr.size() - 2; i >= 0; i--)
        {
            if (arr[i + 1] > maxi)
            {
                maxi = arr[i + 1];
            }

            if (arr[i] >= maxi)
            {
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};