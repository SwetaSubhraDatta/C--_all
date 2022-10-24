#include "bfs.hpp"


inline pair<int,int> get_starting_position(vector<vector<int>> &grid)
{
    for(int i=0;i<grid.size();i++)
    {
        for (int j=0;j<grid[0].size();j++)
        {

            if (grid[i][j]==1)
            {
                return make_pair(i,j);
            }

        }
    }
    return make_pair(-1,-1);

}

int island_perimeter(vector<vector<int>>&grid)
{

    vector<pair<int,int>>directions={make_pair(0,1),make_pair(1,0),make_pair(-1,0),make_pair(0,-1)};
    map<pair<int,int>,bool>visited;// Initailise a map of visted squares
    int perimeter=0;
    queue<pair<int,int>>islands_squares;
    pair<int,int>start=get_starting_position(grid);
    islands_squares.push(start);
    visited[start]=true;

    //BFS
    while(islands_squares.size()!=0)
    {
        
        pair<int,int>current_position=make_pair(islands_squares.front().first,islands_squares.front().second);
        //Got the current current position
        //Now pop the queue
        int rows=current_position.first;
        int cols=current_position.second;
       
        islands_squares.pop();
        for(int i=0;i<directions.size();i++)
        {
            int x=rows+directions[i].first;
            int y=cols+directions[i].second;
            if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size()|| grid[x][y]==0)
            {
                perimeter+=1;
                continue;
            }
            else if(visited[make_pair(x,y)]==true)
            {
                continue;
            }

            else
            {
                //if the position is an island
                if(grid[x][y]==1)
                {
                     visited[make_pair(x,y)]=true;
                    islands_squares.push(make_pair(x,y));
                   

                }

            }
        }
    }

    return perimeter;

}

