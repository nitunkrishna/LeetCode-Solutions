class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int mx=arr[0];
        int mn=arr[0];
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]<mn) mn=arr[i];
            if(arr[i]>mx) mx=arr[i];
        }
        vector<int>freq(mx-mn+1, 0);
        for(int i=0; i<arr.size(); i++)
            freq[arr[i]-mn]++;
        for(int i=0; i<=mx-mn; i++)
        {
            if(freq[i]==0)
                continue;
            for(int j=i+1; j<=mx-mn; j++)
            if(freq[i]==freq[j]) return false;
        }
        return true;
    }
};