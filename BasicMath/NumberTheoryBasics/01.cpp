class Solution
{
public:
    bool armstrongNumber(int n)
    {
        // code her\e
        int ans = 0;
        int temp = n;
        while (n != 0)
        {
            int rem = n % 10;
            ans += rem * rem * rem;
            n /= 10;
        }
        if (ans == temp)
        {
            return true;
        }
        return false;
    }
};