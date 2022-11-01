vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>ans;
        inorder_traversal(root,ans);
        return ans;
        
    }
    
    void inorder_traversal_rev(TreeNode * root,vector<int>&ans)
    {
    if(root==nullptr)
    {
        return;
    }
    inorder_traversal(root->left,ans);
    ans.push_back(root->val);
    inorder_traversal(root->right,ans);
}
    
    
    void inorder_traversal(TreeNode * root,vector<int>& ans)
    {
        if(root==nullptr)
        {
            return;
        }
        stack<TreeNode*>st;
        TreeNode * temp=root;
        while(true)
        {
            if(temp)
            {
                st.push(temp);
                //move the node to the left
                temp=temp->left;
                
            }
            else
            {
                if(st.empty())
                {
                    break;
                }
                temp=st.top();
                st.pop();
                ans.push_back(temp->val);
                temp=temp->right;
            }
        }
        
    }
