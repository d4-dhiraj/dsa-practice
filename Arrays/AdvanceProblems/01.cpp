class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size(), temp = 0;
        // first we have to found this case if k > nums.size() so
        k %= nums.size();

        // complexity is O(n^2)

        // for(int i = 0; i < k; i++){
        //     temp = nums[n-1];
        //     for(int j = n-1; j > 0; j--){
        //         nums[j] = nums[j-1];
        //     }
        //     nums[0] = temp;
        // }

        // save elements first
        vector<int> tempp;
        for (int i = n - k; i < n; i++)
        {
            tempp.push_back(nums[i]);
        }
        for (int i = n - 1; i >= k; i--)
        {
            nums[i] = nums[i - k];
        }
        for (int i = 0; i < tempp.size(); i++)
        {
            nums[i] = tempp[i];
        }
    }
};