#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    vector<vector<int>>merge(vector<vector<int>>&intervals)
    {
        vector<vector<int>>result;
        if(intervals.size()==0)
        {
            return result;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        for(auto it:intervals)
        {
            if(it[0]<=temp[1])
            {
                temp[1]=max(it[1],temp[1]);
            }
            else
            {
                result.push_back(temp);
                temp=it;
            }
        }
        result.push_back(temp);
        return result;
    }

};

int main()
{
    vector<vector<int>>intervals={{1,3},{2,6},{8,10},{15,18}};
    Solution s;
    vector<vector<int>>result=s.merge(intervals);
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return(0);
}