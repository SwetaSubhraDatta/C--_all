// find the first unique character in string

#include <iostream>
#include <vector>
#include <map>
#include <limits>

using namespace std;

int firstUniqChar(string s)
{
    int min=std::numeric_limits<int>::max();
    map<char,pair<int,int>>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]].first++;
        mp[s[i]].second=i;

    }

    for(auto i:mp)
    {
        if(i.second.first==1)
        {
            if(i.second.second<min)
            {
                min=i.second.second;
            }
        }
    }
    if(min == std::numeric_limits<int>::max())
    {
        return -1;
    }
    return min;
    

}

int main()
{
    string s="leetcode";
    int ans;
    ans=firstUniqChar(s);
    std::cout << ans;
    return 0;
     }