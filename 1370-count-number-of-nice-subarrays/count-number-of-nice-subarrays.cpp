class Solution {
public:
    int findOdd(vector<int> nums,int goal)
    {
        int n=nums.size();
        int l=0;
        int r=0;
        int count=0;
        int sub=0;
        while(r<n)
        {
            if(nums[r]%2!=0)
            {
                count++;
            }
            while(l<n && count>goal)
            {
                if(nums[l]%2!=0)
                {
                    count--;
                }
                l++;
            }
            sub+=(r-l+1);
            r++;
        }
        return sub;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return findOdd(nums,k)-findOdd(nums,k-1);
    }
};