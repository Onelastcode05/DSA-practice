class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int hash[256];
        fill(hash, hash + 256, -1); 
        int max_len = 0;
        int n = s.size();

        while (r < n) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
            hash[s[r]] = r; // update last seen index
            max_len = max(max_len, r - l + 1); // update length
            r++;
        }
        return max_len;
    }
};
