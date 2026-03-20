class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        mini=float(inf)
        res=[]
        n=len(arr)
        for i in range(n-1):
            diff=arr[i+1]-arr[i]
            mini =min(mini,diff)
        for i in range (n-1):
            if arr[i+1]-arr[i]==mini:
                res.append([arr[i],arr[i+1]])
        return res