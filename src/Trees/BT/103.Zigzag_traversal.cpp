#include <bt_leetcode.hpp>


vector<vector<int>> Solution ::zigzagLevelOrder(TreeNode* root)
{
    queue<TreeNode*> q;
    vector<vector<int>> result;
    int levelorder=1;
    if (root)
    {
        q.push(root);
    }

    while(!q.empty())
    {
        int levelsize=q.size(); // 1,2
        vector<int>levels; 
        for(int i=0;i<levelsize;i++)
        {
            TreeNode* temp=q.front(); // Take the front value
            q.pop(); // pop off the top value  // 1,3,9
            levels.push_back(temp->val);//R1:LEVELS=[1] //R2:[3,9] /// R3:
            if(temp->left!=nullptr)
            {
                q.push(temp->left); //R1=[9]

            }
            if(temp->right!=nullptr)
            {
                q.push(temp->right);//R1=[9,20]
            }

        }
       
        if(levelorder%2==0) //No
        {
            reverse(levels.begin(),levels.end()); //[9,3]
        }

        result.push_back(levels);//re[1],
        levelorder+=1; //Leveleven=2

    }
}