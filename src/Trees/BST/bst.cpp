#include "bst.hpp"

void BST::createTree()
{
    insert(root,10);
    insert(root,5);
    insert(root,15);
    insert(root,3);
    insert(root,7);
    insert(root,12);
    insert(root,18);

}

void BST::insert(Node*&root,int value)
{
    Node * temp=root;
    if(temp==nullptr)
    {
        //Create a new node
        temp=new Node(value);
        return;
    }
    if (value <temp->data) //Insert in the left subtree
    {
        insert(temp->left,value);
    }
    else //Insert in the right subtree
    {
        insert(temp->right,value);
    }
}

void BST ::printTree(Node * root)
{ 
    Node *temp=root;
    if(temp==nullptr)
    {
        return;
    }
    printTree(temp->left);
    std::cout << temp->data << std::endl;
    printTree(temp->right);

}

Node* BST::getMin(Node* root)
{
    Node *temp=root;
    if(temp==nullptr)
    {
        return nullptr;
    }
    while(temp->left)
    {
        temp=temp->left;
    }
    return temp;

}
void BST::deleteTree(Node *root,int value)
{
    if(root==nullptr)
    {
        return;
    }

    if(value <root->data)
    {
        deleteTree(root->left,value);
    }
    if(value>root->data)
    {
        deleteTree(root->right,value);
    }

    else
    {
        //Case 1: No child
        if(root->left==nullptr and root->right==nullptr)
        {
            delete root;
            root=nullptr;
        }
        //Case 2: One child
        else if(root->left==nullptr)
        {
            Node *temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==nullptr)
        {
            Node *temp=root;
            root=root->left;
            delete temp;
        }
        //Case 3: Two child
        else
        {
            Node *temp=getMin(root->right);
            root->data=temp->data;
            deleteTree(root->right,temp->data);
        }
    }



}