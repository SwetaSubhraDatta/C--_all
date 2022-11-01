#include "bt_leetcode.hpp"


vector<vector<int>>Solution::verticalOrder_traversal(TreeNode* root)
{
        
    map<int, map<int,vector<int>>>nodemap;
    queue<pair<TreeNode*,pair<int,int>>>bfs_q;
    vector<vector<int>>res;

    if(root)
    {
        bfs_q.push(make_pair(root,make_pair(0,0)));
    }

    while(!bfs_q.empty())
    {
        pair<TreeNode*,pair<int,int>>temp=bfs_q.front();
        bfs_q.pop();
        TreeNode* frontNode=temp.first;
        int hd=temp.second.first;
        int lvl=temp.second.second;
        nodemap[hd][lvl].push_back(frontNode->val);
        if(frontNode->left)
        {
            bfs_q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
        }
        if(frontNode->right)
        {
            bfs_q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
        }

    }
    for(auto i:nodemap)
    {
        vector<int>ans;
        for(auto j:i.second)
        {
            sort(j.second.begin(),j.second.end());
            for(auto k:j.second)
            {
                ans.push_back(k);
            }
        }
        
        res.push_back(ans);
    }

    return res;
}


