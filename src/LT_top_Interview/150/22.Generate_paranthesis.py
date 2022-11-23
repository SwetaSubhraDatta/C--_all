class Solution:
    def generateParenthesis(self, n: int) -> list:
        stack=[]
        res=[]

        def backtrack(openN,closedN):
            #base case
            if(openN==n and closedN==n):
                res.append("".join(stack))
                return
            #recursive case
            if(openN<n):
                stack.append("(")
                backtrack(openN+1,closedN)
                stack.pop()
            if(closedN<openN):
                stack.append(")")
                backtrack(openN,closedN+1)
                stack.pop()
        backtrack(0,0)
        return res