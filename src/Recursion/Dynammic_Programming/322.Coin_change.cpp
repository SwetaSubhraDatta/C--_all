#include <vector>
#include <iostream>

#define INT_MAX INT8_MAX
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
            // Write your code here.
    vector<int>DP(amount+1,-1);
    int ans=coinchange_helper(coins,amount,DP);
    if(ans!=INT_MAX)
        return(ans);
    return(-1);
        
    }
    
    int coinchange_helper(vector<int> &num, int x,vector<int> &DP)
    {
        //bse case
        if(x==0)return(0);
        if(x<0)return(INT_MAX);
        //check ans is alrady exist or not
        if(DP[x]!=-1)return(DP[x]);
        //calculate ans and save for future use case
        int mini=INT_MAX;
        for(int i=0;i<num.size();i++)
        {
            int ans=coinchange_helper(num,x-num[i],DP);
            if(ans!=INT_MAX)
                mini=min(mini,1+ans);
        }
        DP[x]=mini;
        return(DP[x]);

    }

};

int main()
{
    vector<int>nums={1,2,5};
    int amount=11;
    Solution obj;
    cout<<obj.coinChange(nums,amount);
    return 0;
}