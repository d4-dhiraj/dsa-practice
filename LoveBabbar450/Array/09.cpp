class Solution
{
public:
    int getMinDiff(vector<int> &arr, int k)
    {
        int n = arr.size();

        // Step 1: Sort the heights
        sort(arr.begin(), arr.end());

        // Initial difference
        int ans = arr[n - 1] - arr[0];

        // Try every possible partition
        for (int i = 1; i < n; i++)
        {

            // If decreasing makes height negative, skip
            if (arr[i] - k < 0)
                continue;

            // Minimum height after modification
            int mini = min(arr[0] + k, arr[i] - k);

            // Maximum height after modification
            int maxi = max(arr[n - 1] - k, arr[i - 1] + k);

            // Update answer
            ans = min(ans, maxi - mini);
        }

        return ans;
    }
};