#class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                ans.push_back(nums[i]);
            }
        }
        int count = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            count++;
            nums[i] = ans[i];
        }
        return count;
    }
};