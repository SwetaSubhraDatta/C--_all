#include <vector>
#include <queue>
#include <iostream>
#include <bfs.hpp>


vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    // init the queue
    vector<pair<int, int>> directions = {make_pair(0, 1), make_pair(1, 0), make_pair(-1, 0), make_pair(0, -1)};
    queue<pair<int, int>> flint;
    map<pair<int, int>, bool> visited; // visited map
    int start = image[sr][sc];         // start index given
    int current_color = image[sr][sc];
    image[sr][sc] = color;         // color the element
    flint.push(make_pair(sr, sc)); // push the starting point
    // lets start visiting the node
    while (flint.size() != 0)
    {
        pair<int, int> pixel = make_pair(flint.front().first, flint.front().second);
        // mark the node as visited

        int row_element = pixel.first;
        int column_element = pixel.second;
        flint.pop();
        for (int i = 0; i < directions.size(); i++)
        {
            int x = row_element + directions[i].first;
            int y = column_element + directions[i].second;
            // first check coundary conditions
            if (x < 0 || y < 0 || x >= image.size() || y >= image[0].size())
            {
                continue;
            }
            // Than check if its already visted or not
            else if (visited[make_pair(x, y)] == true)
            {
                continue;
            }

            // change the colour
            if (image[x][y] == current_color)
            {
                visited[make_pair(x,y)] = true;
                image[x][y] = color;
                flint.push(make_pair(x, y));
            }
        }
    }
    visited.clear();

    return image;
}
