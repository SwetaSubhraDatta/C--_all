#include <iostream>
#include <vector>


class Node 
{
    public:
        int data;
        Node *left;
        Node *right;
        Node (int data)
        {
            this->data=data;
            this->left=nullptr;
            this->right=nullptr;
        }

};

class BST
{
    Node * root;
    public:
        void insert(Node*& root,int value);
        void createTree();
        void printTree(Node *root);
        void deleteTree(Node *root,int value);
        void inorderSucessor(Node *root);
        Node* getMin(Node *root);


};