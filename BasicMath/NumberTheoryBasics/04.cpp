class Solution
{
public:
    int gcd(int a, int b)
    {
        // code here
        while (a != 0)
        {
            int temp = a;
            int a = b % a;
            b = temp;
        }
        return a;
    }
};
