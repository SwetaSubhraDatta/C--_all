class Solution:
    def countAndSay(self,n):
        s="1"
        for i in range(2,n+1):
            prev=s[0] #get the first character
            counter=1 #set the counter to 1
            temp=[] #create a temp list
            for j in range(1,len(s)):#iterate over the string from 1 to len(s)
                ch=s[j] #get the current character
                if(ch!=prev): #if the current character is not equal to the previous character
                    temp.append(str(counter)) #append the counter to the temp list
                    temp.append(prev) #append the previous character to the temp list
                    prev=ch #set the previous character to the current character
                    counter=1 #set the counter to 1
                else:
                    counter+=1 #increment the counter
            temp.append(str(counter)) #append the counter to the temp list
            temp.append(prev) #append the previous character to the temp list
            s="".join(temp) #join the temp list to get the string
        return s #return the string
    
if __name__ == '__main__':
    print (Solution().countAndSay(4))

                    