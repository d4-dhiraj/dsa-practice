class Solution
{
public:
    void segregate0and1(vector<int> &arr)
    {
        int count0 = 0;

        // Count the number of 0s
        for (int x : arr)
        {
            if (x == 0)
                count0++;
        }

        // Fill the array with 0s
        for (int i = 0; i < count0; i++)
        {
            arr[i] = 0;
        }

        // Fill the remaining positions with 1s
        for (int i = count0; i < arr.size(); i++)
        {
            arr[i] = 1;
        }
    }
};