#include "bt.hpp"

Node* BT::build_tree(Node* root)
{
    queue<Node *> binary_tree;
    // Step 1 : Take the data for the root node from the user
    cout << " Enter the data for the root node" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    binary_tree.push(root);

    while (binary_tree.size() != 0)
    {
        Node *temp = binary_tree.front();
        // Pop the element
        binary_tree.pop();

        cout << "Enter the left node for " << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new Node(leftdata); // create a new node on the left
            // push it to the queue
            binary_tree.push(temp->left);
        }

        cout << "Enter the right node for" << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1) // Stopping condition when the data is -1
        {
            temp->right = new Node(rightdata);
            binary_tree.push(temp->right);
        }
    }
    return root;
}


void BT::inorder_traversal(Node * root,vector<int>&ans)
{
    if(root==nullptr)
    {
        return;
    }
    ans.push_back(root->data);
    inorder_traversal(root->left,ans);
    inorder_traversal(root->right,ans);
}

void BT::level_order_transversal(Node *root)
{
    queue<Node *> binary_tree;
    if (root != nullptr)
    {
        binary_tree.push(root);
    }

    while (!binary_tree.empty())
    {
        Node *temp = binary_tree.front();
        cout << temp->data << " ";
        binary_tree.pop();
        if (temp->left != nullptr)
        {
            binary_tree.push(temp->left);
        }

        if (temp->right != nullptr)
        {
            binary_tree.push(temp->right);
        }
    }
}

void BT::level_order_transversal(Node *root, bool level)
{
    queue<Node *> binary_tree;
    if (root != nullptr)
    {
        binary_tree.push(root);
        binary_tree.push(nullptr);
    }

    while (!binary_tree.empty())
    {
        Node *temp = binary_tree.front();
       
        binary_tree.pop();
        if (temp == nullptr)
        {
            cout << endl; // you can also print a new line
            if (!binary_tree.empty())
            {
                binary_tree.push(nullptr);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                binary_tree.push(temp->left);
            }

            if (temp->right)
            {
                binary_tree.push(temp->right);
            }
        }
    }
}
