class Solution
{
public:
    int reverse(int x)
    {
        int temp = x, rem = 0;
        long long rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;

            temp /= 10;
        }
        if (rev > INT_MAX || rev < INT_MIN)
        {
            return 0;
        }
        return rev;
    }
};