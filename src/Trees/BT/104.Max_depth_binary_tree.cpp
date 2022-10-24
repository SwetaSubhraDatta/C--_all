#include "bt_leetcode.hpp"



int get_height_with_dfs(TreeNode* root)
{   

    if (root==NULL)
    { 
        return 0;
    }
    else
    {
    int lheight=get_height_with_dfs(root->left);
    int rheight=get_height_with_dfs(root->right);
    int d=1+max(lheight,rheight);
    return d;
    }
}




int Solution:: max_depth_iterative(TreeNode* root)
{
    // Step1 : if root is not empty push level =1 and root into the stack
    // Step 2: Iterate until the stack is empty or all the nodes has been visited
                // Step 2.1 : get current depth
                // Step 2.2 : get current node
                // Step 2.3 : Important step pop() the stack or remove the current node as it is saved
                    // Step 2.3.1 : get the max or min depth 
                // Step 2.4 : Get the left of the current node and push it into the stack
                // stap2.5 : Get the right of the current node and push it into the stack
    // Step 3: Return the max depth
    int max_depth=0;
    stack<pair<int,TreeNode*>>bt_holder;
    if (root)
    {
        bt_holder.push(make_pair(1,root));
    }
    while(!bt_holder.empty())
    {
        //get current node and current depth
        int current_depth=bt_holder.top().first;
        TreeNode* temp=bt_holder.top().second;
        bt_holder.pop();// dont forget to pop the stack
        max_depth=max(max_depth,current_depth);
        
        if(temp->left!=nullptr )
        {
            bt_holder.push(make_pair(current_depth+1,temp->left));
        }
        if(temp->right!=nullptr)
        {
            bt_holder.push(make_pair(current_depth+1,temp->right));
        }
        
    }
    return max_depth;

}



int Solution:: max_depth(TreeNode*n,string type)
{
    // if(type=="1")
    // {
    //      cout<<"The max depth of the tree is"<<get_height_with_dfs(n);
    // }
    // return get_height_with_dfs(n);
    cout<<"The height is "<<max_depth_iterative(n);
    return get_height_with_dfs(n);
}