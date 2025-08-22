#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        count[0] = 1;   
        int prefix = 0, ans = 0;

        for (int x : nums) {
            prefix += (x % 2);     
            ans += count[prefix - k]; 
            count[prefix]++;
        }
        return ans;
    }
};
