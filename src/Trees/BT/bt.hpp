#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <queue>
 
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
    void inorder_traversal(Node *n);
    


};