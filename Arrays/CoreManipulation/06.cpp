class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        // O(n2)
        int count = 0, totalCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
                if (totalCount < count)
                {
                    totalCount = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        return totalCount;
    }
};