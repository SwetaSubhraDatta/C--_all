class Solution:
    def permute(self,nums):
        ans=[[]]
        index=0

        def backtrack(nums,ans,index):
            if index==len(nums):
                ans.append(nums[:])
                return
            for i in range(index,len(nums)):
                nums[i],nums[index]=nums[index],nums[i]
                backtrack(nums,ans,index+1)
                nums[i],nums[index]=nums[index],nums[i]
        backtrack(nums,ans,index)
        return ans
    
    
