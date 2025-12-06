class Solution
{
public:
    bool isPalindrome(int x)
    {
        if(x<0) return false;
        long long n=0;
        int a=x;
        while(a!=0)
        {
            long long dig=a%10;
            n=dig+(n*10);
            if((n>std::numeric_limits<int>::max())||(n<std::numeric_limits<int>::min())) return 0;
            a/=10;
        }
        if(x==n) return true;
        else return false;
    }
};
