#include <iostream>
#include <stack>

#include <bt_leetcode.hpp>
using namespace std;

int get_height(TreeNode *n)
{
    if (n == nullptr)
    {
        return 0;
    }
    return max(get_height(n->left), get_height(n->right)) + 1;
}

vector<vector<int>> Solution::levelOrderBottom(TreeNode *root)
{
    int height = get_height(root);
    queue<TreeNode *> bt;
    vector<vector<int>> res(height, (vector<int>(), vector<int>(0)));
    vector<int> levels;

    // S1 first put the root into the tree
    if (root)
    {
        bt.push(root);
    }
    while (!bt.empty())
    {
        // S2 Unless bt is empty
        //  At at each level get the size of the queue
        //  and pop
        int levelsize = bt.size();

        for (int i = 0; i < levelsize; i++)
        {
            TreeNode *temp = bt.front();
            bt.pop();
            levels.push_back(temp->val);
            if (temp->left != nullptr)
            {
                bt.push(temp->left);
            }
            if (temp->right != nullptr)
            {
                bt.push(temp->right);
            }
        }
        res[--height] = levels;//This is a vector levels not a value
        levels.clear();
    }

    return res;
}