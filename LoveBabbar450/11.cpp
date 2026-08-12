class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mapping;

        for (int i : nums)
        {
            mapping[i]++;
        }

        for (int i : nums)
        {
            if (mapping[i] > 1)
            {
                return i;
            }
        }

        return -1;
    }
};