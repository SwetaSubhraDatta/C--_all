#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution 
{
     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
     {
        //Step 1: Create the map to get position
        unordered_map<int, int> map;
        //Step 2: Fill the map
        for(int i = 0; i < inorder.size(); i++)
            map[inorder[i]] = i;
        //Step 3: Call the recursive function
        TreeNode *root =formTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,map);
        return root;
     }

     TreeNode *formTree(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd, unordered_map<int, int> &map)
     {
        //Step 1: Base case if preStart > preEnd and inStart > inEnd
        if(preStart > preEnd || inStart > inEnd)
            return NULL;
        //Step 2: Create the  node
        TreeNode *root = new TreeNode(preorder[preStart]);
        //Step 3: Get the position of the root in inorder
        int inIndex = map[preorder[preStart]];
        //Step 4: Get the left and right subtree
        int numsLeft = inIndex - inStart;
        //Step 5: Call the recursive function
        root->left = formTree(preorder, preStart+1, preStart+numsLeft, inorder, inStart, inIndex-1, map); //left subtree
        root->right = formTree(preorder, preStart+numsLeft+1, preEnd, inorder, inIndex+1, inEnd, map);//right subtree
        return root;//return the root
     }
};


