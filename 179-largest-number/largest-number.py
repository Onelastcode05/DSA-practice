class Solution:
    def largestNumber(self, nums: List[int]) -> str:
      from functools import cmp_to_key

class Solution:
    def largestNumber(self, nums):
        nums = list(map(str, nums))
        
        def cmp(a, b):
            return -1 if a + b > b + a else 1
        
        nums.sort(key=cmp_to_key(cmp))
        
        res = ''.join(nums)
        return "0" if res[0] == "0" else res  