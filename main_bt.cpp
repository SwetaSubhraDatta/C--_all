#include "bt.hpp"
#include "bt_leetcode.hpp"

/*
Unit test the max depth of the tree
*/

void test_max_depth_of_the_tree()
{
    Solution soly;
    TreeNode* rootree=new TreeNode(1);
    rootree->left=new TreeNode(2);
    rootree->right=new TreeNode(3);
    soly.max_depth(rootree,"1");
    delete rootree;
}

void test_min_depth_of_the_tree()
{
    Solution soly;
    TreeNode* rootree=new TreeNode(1);
    rootree->left=new TreeNode(2);
    rootree->right=new TreeNode(3);
    soly.min_depth(rootree);
    delete rootree;
}

void test_level_order_reverse()
{
    Solution soly;
    TreeNode* rootree=new TreeNode(1);
    rootree->left=new TreeNode(2);
    rootree->right=new TreeNode(3);
    rootree->left->left=new TreeNode(4);
    rootree->left->right=new TreeNode(5);
    soly.levelOrderBottom(rootree);
}

int main()
{
    test_level_order_reverse();
    test_min_depth_of_the_tree();

    test_max_depth_of_the_tree();

    Solution sol;
    TreeNode* rootree=new TreeNode(1);
    rootree->left=new TreeNode(2);
    rootree->right=new TreeNode(3);
    rootree->left->left=new TreeNode(4);
    rootree->left->right=new TreeNode(5);
    sol.levelOrder(rootree);
    BT bt;
    Node* root=nullptr;
    Node *tree=nullptr;
    tree=bt.build_tree(root);
    bt.level_order_transversal(tree,true);
}