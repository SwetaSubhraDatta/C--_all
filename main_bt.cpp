#include "bt.hpp"


int main()
{
    BT bt;
    Node* root=nullptr;
    Node *tree=nullptr;
    tree=bt.build_tree(root);
    bt.level_order_transversal(tree,true);
}