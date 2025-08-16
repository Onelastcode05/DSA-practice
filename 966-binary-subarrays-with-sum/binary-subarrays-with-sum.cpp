class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> freq;
        freq[0] = 1; // prefix sum = 0 occurs once initially
        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;

            if (freq.find(sum - goal) != freq.end()) {
                count += freq[sum - goal];
            }

            freq[sum]++;
        }

        return count;
    }
};
