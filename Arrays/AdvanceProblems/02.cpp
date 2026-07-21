class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        // int i = 1, j = nums.size()-1;
        vector<int> ans = nums;
        sort(nums.begin(), nums.end());
        int j = nums.size() - 1;
        for (int i = 1; i < nums.size(); i = i + 2)
        {
            ans[i] = nums[j];
            j--;
        }
        for (int i = 0; i < nums.size(); i += 2)
        {
            ans[i] = nums[j];
            j--;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = ans[i];
        }
    }
};