class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        n=len(nums)
        right=n-1
        left=0
        sorted_nums=sorted(nums)
        while left<n and nums[left]==sorted_nums[left]:
            left+=1
        while right>left and nums[right]==sorted_nums[right]:
            right-=1
        return right-left+1