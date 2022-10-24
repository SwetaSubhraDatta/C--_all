#include <bt_leetcode.hpp>

/*
Leetcode program to print the level order traversal of a binary tree
*/

vector<vector<int>> Solution::levelOrder(TreeNode *n)
{
    vector<vector<int>> treeholder;
    queue<TreeNode *> bt;
    if (n != nullptr)
    {
        bt.push(n);
    }

    while (!bt.empty())
    {
        int levelsize = bt.size();
        vector<int> level;
        for (int i = 0; i < levelsize; i++)
        {
            TreeNode *temp = bt.front();
            bt.pop();
            level.push_back(temp->val);
            if (temp->left != nullptr)
            {
                bt.push(temp->left);
            }
            if (temp->right != nullptr)
            {
                bt.push(temp->right);
            }
        }
        treeholder.push_back(level);
    }
    return treeholder;
}