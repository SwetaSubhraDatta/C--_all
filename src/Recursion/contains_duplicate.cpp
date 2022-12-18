#include <iostream>
#include <vector>
#include <map>
using namespace std;

//Step 1: convert to a map
 map<int,int>mp(vector<int>&nums)
 {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
 }
bool conatins_duplicate(vector<int>&nums)
{   
    map<int,int>mp=mp(nums);
    for(int i=0;i<nums.size();i++)
    {
        if(mp.find(nums[i])!=mp.end())
        {
            return(true);
        }
    }
    return(false);
    
}

int main()
{
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    cout<<conatins_duplicate(nums);
    return 0;
}


