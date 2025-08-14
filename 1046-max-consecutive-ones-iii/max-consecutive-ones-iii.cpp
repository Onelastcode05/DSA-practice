class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0;
        int max_len = 0;
        int zeroes = 0;
        while (r < n) {
            if (nums[r] == 0)
                zeroes++;
            while (zeroes > k) {
                if (nums[l] == 0)
                    zeroes--;
                l++;
            }
                int len = r - l + 1;
                max_len = max(max_len, len);
                r++;
            
        }
        return max_len;
    }
};