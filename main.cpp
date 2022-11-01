#include <iostream>
#include <vector>
#include <string>

#include "bfs.hpp"
#include "bitwise.hpp"
#include "bt.hpp"
using namespace std;

void Samsung_unit_test()
{
    uint32_t num = 0x1124545;
    uint8_t pattern = 0x45;
    Samsung op;
    cout << op.count_8_bits(num, pattern);
}

void island_perimeter_unit_test()
{
    vector<vector<int>> grid = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    cout << island_perimeter(grid);
}

void flood_fill_unit_test()
{
    vector<vector<int>> matrix = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    int sr = 1;
    int sc = 0;
    int color = 2;
    vector<vector<int>> result = floodFill(matrix, sr, sc, color);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void maxAreaofIsland_unit_test()
{
    vector<vector<int>> grid = { 
    { 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 }, 
    { 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, 
    { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0 }, 
    { 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0 }, 
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 }, 
    { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 } };
    
    vector<vector<int>> grid2 = { 
    { 0, 0, 0, 0, 0, 0, 0, 0 } };
    cout << maxAreaofIsland(grid);
    cout<<maxAreaofIsland(grid2);
}


void test_left_view()
{
    BT bt;
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(9);
    bt.left_view(root, false);
}

void test_inorder_traversal()
{
    BT bt;
    vector<int> ans;
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(6);
    root->left->right = new Node(7);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    bt.inorder_traversal(root,ans);
    for(auto &i:ans)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
    //#Samsung_unit_test();
    // flood_fill_unit_test();
    // island_perimeter_unit_test();
    //maxAreaofIsland_unit_test();
    //test_left_view();
    test_inorder_traversal();
}