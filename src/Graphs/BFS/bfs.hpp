#include <list>
#include <string>
#include <map>
#include <vector>
#include <queue>
using namespace std;


vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color);
int island_perimeter(vector<vector<int>> &grid);
int maxAreaofIsland(vector<vector<int>>&grid);
int find_connected_components(vector<vector<int>>&grid,queue<pair<int,int>>&connected_components,
                                     vector<vector<bool>>&visited,int current_value);