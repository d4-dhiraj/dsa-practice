class Solution
{
public:
    int upperBound(vector<int> &arr, int target)
    {
        // code here
        int ans = arr.size();
        int s = 0, e = ans - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] > target)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};