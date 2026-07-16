class Solution
{
public:
    int sumOfDigits(int n)
    {
        // code here
        int digit = 0, sum = 0;
        while (n != 0)
        {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
        return sum;
    }
};