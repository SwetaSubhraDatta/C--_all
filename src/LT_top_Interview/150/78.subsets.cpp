#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>>subsets(vector<int>&nums)
{
    vector<vector<int>>ans;
    int n=nums.size();
    int bits=1<<n;
    for(int i=0;i<bits;i++)
    {
        vector<int>temp;
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                temp.push_back(nums[j]);
            }
        }
        ans.push_back(temp);
    }

    return ans;
}

int main()
{
    vector<int>nums={1,2,3};
    vector<vector<int>>ans=subsets(nums);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}