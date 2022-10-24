#include "bt.hpp"
#include "bt_leetcode.hpp"

/*
Unit test the max depth of the tree
*/


void test_whether_trees_are_equal()
{
    TreeNode* root1=new TreeNode(1);
    root1->left=new TreeNode(2);
    root1->right=new TreeNode(3);
    root1->left->left=new TreeNode(4);
    root1->left->right=new TreeNode(5);
    root1->right->left=new TreeNode(6);
    root1->right->right=new TreeNode(7);

    TreeNode* root2=new TreeNode(1);
    root2->left=new TreeNode(2);
    root2->right=new TreeNode(3);
    root2->left->left=new TreeNode(4);
    root2->left->right=new TreeNode(5);
    root2->right->left=new TreeNode(6);
    root2->right->right=new TreeNode(7);

    Solution s;
    assert(s.isSameTree(root1,root2)==true);
    cout<<"Test passed"<<endl;
}
void test_max_depth_of_the_tree()
{
    Solution soly;
    TreeNode* rootree=new TreeNode(1);
    rootree->left=new TreeNode(2);
    rootree->right=new TreeNode(3);
    soly.max_depth(rootree);
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

void test_diamter_of_the_tree()
{
    Solution soly;
    TreeNode* rootree=new TreeNode(1);
    rootree->left=new TreeNode(2);
    rootree->right=new TreeNode(3);
    rootree->left->left=new TreeNode(4);
    rootree->left->right=new TreeNode(5);
    soly.diameterOfBinaryTree(rootree);
}

void test_zigzag_trversal()
{
    vector<vector<int>>expected={{3},{20,9},{15,7}};
    vector<vector<int>>actual;
    Solution soly;
    TreeNode* rootree=new TreeNode(1);
    rootree->left=new TreeNode(2);
    rootree->right=new TreeNode(3);
    rootree->left->left=new TreeNode(4);
    rootree->left->right=new TreeNode(5);
    actual=soly.zigzagLevelOrder(rootree);
    assert(actual==expected);

}

int main()
{
    test_zigzag_trversal();
    test_whether_trees_are_equal();
    test_diamter_of_the_tree();
    test_level_order_reverse();
    test_min_depth_of_the_tree();

    test_max_depth_of_the_tree();

}