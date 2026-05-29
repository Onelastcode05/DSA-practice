class Solution:
    def minElement(self, nums):
        # Replace each number with sum of its digits
        # and return the minimum value
        return min(sum(int(d) for d in str(num)) for num in nums)