#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <queue>
#include <cassert>
#include <map>
 
using namespace std;


class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


class BT
{

public:
    Node* root;
    int height;
    Node* build_tree(Node * n);
    void level_order_transversal(Node *n);
    void level_order_transversal(Node *n,bool levels);
    void post_order_traversal(Node *n);
    void pre_order_traversal(Node *n);
    void inorder_traversal(Node *n,vector<int>&ans);
    vector<int> top_view(Node *n);
    vector<int> bottom_view(Node *n);
    vector<vector<int>> left_view(Node *n,bool recursion);
    vector<vector<int>> right_view(Node *n);
    
};