class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int temp = n / 2;
        int count;
        for (int i = 0; i < n - 1; i++)
        {
            count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
            if (count > temp)
            {
                return nums[i];
            }
        }
        return -1;
    }
};