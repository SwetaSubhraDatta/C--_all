class Solution:
    def permuteUnique(self,nums):
        ans=[]
        nums.sort()
        def backtrack(nums,ans,temp):
            if not nums:
                ans.append(temp)
                return
            for i in range(len(nums)):
                if i>0 and nums[i]==nums[i-1]:
                    continue
                backtrack(nums[:i]+nums[i+1:],ans,temp+[nums[i]])
        backtrack(nums,ans,[])
        return ans