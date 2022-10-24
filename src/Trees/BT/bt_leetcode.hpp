#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <stack>
#include <queue>


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
    public:
    vector<vector<int>>levelOrder(TreeNode* root);
    vector<vector<int>>levelOrderBottom(TreeNode* root);
    int max_left(TreeNode* root);
    int max_depth(TreeNode* n,string type);
    int max_depth_iterative(TreeNode* n);
    int min_depth(TreeNode* n);
};