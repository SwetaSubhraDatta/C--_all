#include <bt_leetcode.hpp>


void traverseLeft(TreeNode* root,vector<int>&ans)
{
    //baseCase
    if(root==nullptr)
    {
        return;
    }
    //Do not take leaf nodes into account
    if(root->left==nullptr and root->right==nullptr)
    {
        return;
    }
    ans.push_back(root->val); //Preorder
    if(root->left)
    {
        traverseLeft(root->left,ans);

    }
    else
    {
        traverseLeft(root->right,ans);
    }

}

void traverseRight(TreeNode* root ,vector<int>&ans)
{
    if (root==nullptr or (root->left==nullptr and root->right==nullptr))
    {
        return;
    }

    if(root->right)
    {
        traverseRight(root->right,ans);
    }
    else
    {
        traverseRight(root->left,ans);
    }

    ans.push_back(root->val);
}


void getleaf(TreeNode* root,vector<int>&ans)
{
    if(!root)
    {
        return;
    }

    if(root->left==nullptr and root->right==nullptr)
    {
        ans.push_back(root->val);
        return;
    
    }

    getleaf(root->left,ans);
    getleaf(root->right,ans);
}


vector<int>Solution::boundaryOfBinaryTree(TreeNode * root)
{
    vector<int>res;
    //First insert the root node
    if(root)
    {
    res.push_back(root->val);
   }
   else
   {
    return res;
   }

   //First traverseleft
   traverseLeft(root->left,res);
   //Get leaf from left
   getleaf(root->left,res);
   //Get leaf from right
   getleaf(root->right,res);
   //Go right
   traverseRight(root->right,res);

   return res;

}



