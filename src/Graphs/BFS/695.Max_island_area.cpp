#include <iostream>
#include <vector>
#include <string>
#include <bfs.hpp>
#include <limits>
#define INFINITY std::numeric_limits<int>::max()

int maxAreaofIsland(vector<vector<int>> &grid)
{
    queue<pair<int, int>> connected_islands;
    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
    int i = 0;
    int j = 0;
    int count = 0;
    int max_count = -INFINITY;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (!visited[i][j])
            {
                int current_value = grid[i][j];
                if (current_value == 1)
                {

                    visited[i][j] = true; // Visit the position when the 1  is first found
                    // Now find the neighbours which is land only and get the count
                    connected_islands.push(make_pair(i, j));
                    count = find_connected_components(grid, connected_islands, visited, current_value);
                    count = count + 1;
                    if (count > max_count)
                    {
                        max_count = count;
                    }
                }
            }
        }
    }
    if (max_count==-INFINITY)
    {
        return 0;
    }   
    return max_count;
}

int find_connected_components(vector<vector<int>> &grid, queue<pair<int, int>> &connected_components,
                              vector<vector<bool>> &visited, int current_value)
{
    vector<pair<int, int>> directions = {make_pair(0, 1), make_pair(1, 0), make_pair(0, -1), make_pair(-1, 0)};
    // do bfs to find the connected islands;
    int count = 0;
    while (connected_components.size() != 0)
    {
        int row_ele = connected_components.front().first;  // Get the row element
        int col_ele = connected_components.front().second; // Get the column element
        connected_components.pop();                        // Pop the element
        for (int i = 0; i < directions.size(); i++)        // iterate through the directions
        {
            int x = row_ele + directions[i].first;                                                             // Get the row element + the direction
            int y = col_ele + directions[i].second;                    1                                        // Get the column element + the direction
            if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == 0 || visited[x][y]) // check boundary and already visited
            {
                continue;
            }
            else
            {
                visited[x][y] = true;                       // Mark the position as visited
                connected_components.push(make_pair(x, y)); // Push the position to the queue
                count++;                                    // Increment the count
            }
        }
    }
    return count;
}
