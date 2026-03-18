class Solution:
    def longestMountain(self, arr: List[int]) -> int:
        i=1
        ans=0
        n=len(arr)
        while i<n-1:
            if arr[i-1]<arr[i]>arr[i+1]:
                l=i
                r=i
                while l>0 and arr[l-1]<arr[l]:
                    l-=1
                while r<n-1 and arr[r]>arr[r+1]:
                    r+=1
                ans=max(ans,r-l+1)
                i=r
            else:
                i+=1
        return ans

                
