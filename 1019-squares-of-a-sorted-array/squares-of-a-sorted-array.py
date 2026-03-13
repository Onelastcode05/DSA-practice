class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n=len(nums)
        right=n-1
        left=0
        res=[0]*n
        pos=n-1
        for i in range (n):
            if nums[left]**2 > nums[right]**2:
                res[pos]=nums[left]**2
                left+=1
            else:
                #res[pos]=nums[right]**2
                res[pos] = nums[right]**2
                right-=1
            pos-=1

        return res
