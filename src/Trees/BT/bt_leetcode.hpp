#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>


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

    public://Global holders
    vector<int>holder;
    public:
    vector<vector<int>>levelOrder(TreeNode* root);
    vector<vector<int>>levelOrderBottom(TreeNode* root);
    int max_left(TreeNode* root);
    int max_depth(TreeNode* n);
    int max_depth_iterative(TreeNode* n);
    int diameterOfBinaryTree(TreeNode* root);
    pair<int,int> diameterofBinaryTree_Optimised(TreeNode* root);
    bool isBalanced(TreeNode* root);
    bool isSameTree(TreeNode* p, TreeNode* q);
    vector<vector<int>> zigzagLevelOrder(TreeNode* root);
    vector<int>boundaryOfBinaryTree(TreeNode* root);
    vector<vector<int>>verticalOrder_traversal(TreeNode* root);
    int min_depth(TreeNode* n);
};