#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;


 class TreeNode {
    public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


class Solution 
{
      TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
      {
        //Step 1: Create the map to get position
        unordered_map<int, int> map;
        //Step 2: Fill the map
        for(int i = 0; i < inorder.size(); i++)
            map[inorder[i]] = i;
        //Step 3: Call the recursive function
        TreeNode *root =formTree(postorder,postorder.size()-1,0,inorder,0,inorder.size()-1,map);
        return root;


      }

      TreeNode *formTree(vector<int>& postorder, int postStart, int postEnd, vector<int>& inorder, int inStart, int inEnd, unordered_map<int, int> &map)
      {
        //Base
        
      }
};