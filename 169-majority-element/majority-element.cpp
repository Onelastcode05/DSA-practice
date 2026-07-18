class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele=0;
        int n=nums.size();
       for(int i=0;i<n;i++){
        if(cnt==0){
            ele=nums[i];
            cnt=1;
        }
        else if(ele==nums[i]){cnt++;}
        else{
            cnt--;
        }
       }
       int ans=0;
       
       for(int i=0;i<nums.size();i++){
            if(ele==nums[i]){
                ans++;
            }
            if(ans>n/2){
                return ele;
            }
       }
       return -1;
    }
};