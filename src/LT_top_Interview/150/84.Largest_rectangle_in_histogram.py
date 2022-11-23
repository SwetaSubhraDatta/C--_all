class Solution:
    def largestRectangleArea(self, heights: list) -> int:
        n=len(heights) #get the end poinmt
        next_vals=self.getnextsmallIndex(heights,n)
        print(next_vals)
        prev=self.prevsmallIndex(heights,n)
        print(prev)
        area=float('-inf')
        for i in range(n):
            #get length
            l=heights[i]
            if(next_vals[i]==-1):
                next_vals[i]=n
            b=next_vals[i]-prev[i]-1
            newArea=l*b
            area=max(area,newArea)
        return area
    
    def getnextsmallIndex(self,heights,n):
        #Step 1 : Append -1 to the end of the stack
        stack=[-1]
        #Step 2 : Create a list of 0's of size n for ans
        ans=[0]*len(heights)
        #Step 3 : Iterate over the heights from back
        for i in range(n-1,-1,-1):
            current=heights[i] #get the current height

            #Step 4 : While the stack is not empty and the top of the stack is greater than the current height 
            #and the top of the stack is not -1
            while(stack[-1]!=-1 and heights[stack[-1]]>=current): 
                stack.pop() #pop the top of the stack
            ans[i]=stack[-1] #get the top of the stack and store it in ans
            stack.append(i) #append the current index to the stack
        return ans

    def prevsmallIndex(self,heights,n):
        #Step 1 : Append -1 to the end of the stack
        stack=[-1]
        #Step 2 : Create a list of 0's of size n for ans
        ans=[0]*len(heights)
        #Step 3 : Iterate over the heights from back from 0 to n
        for i in range(n):
            current=heights[i] #get the current height
            #Step 4 : While the stack is not empty and the top of the stack is greater than the current height
            while(stack[-1]!=-1 and heights[stack[-1]]>=current):
                stack.pop()
            #Step 5 : Get the top of the stack and store it in ans
            ans[i]=stack[-1]
            #Step 6 : Append the current index to the stack
            stack.append(i)
        return ans

if __name__ == '__main__':
    print (Solution().largestRectangleArea([2,1,5,6,2,3]))