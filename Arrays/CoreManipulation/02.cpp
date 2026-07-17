class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        // code here
        int max1 = -1, max2 = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (max1 < arr[i])
            {
                max1 = arr[i];
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            // if(arr[i] == max1){
            //     continue;
            // }
            if (max2 < arr[i] && arr[i] != max1)
            {
                max2 = arr[i];
            }
        }
        return max2;
    }
};