class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int n=nums.size(), uni=0;
        for(int i=0; i<n-1; i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[uni]=nums[i];
                uni++;
            }
        }
        nums[uni]=nums[n-1];
        uni++;
        return uni;
    }
};
