//Sprial matrix I
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
 
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
          vector<int>ans;
        int max_rows=matrix.size();
        int max_cols=matrix[0].size();

        map<pair<int,int>,bool> visited;

        dfs(matrix,0,0,max_rows-1,max_cols-1,visited,ans);
        return ans;   
    }
    
    
    void dfs(vector<vector<int>>&matrix,int rows,int cols,int max_rows,int max_cols,
            map<pair<int,int>,bool>&visited,vector<int>&ans)
    {
        if(rows<0 || cols<0 || rows>max_rows || cols>max_cols || visited[{rows,cols}])
        {
            return;
        }
        //std::cout << "matrix[" << rows << "][" << cols << "] = " << matrix[rows][cols] << "\n";
        visited[{rows,cols}]=true;
        ans.push_back(matrix[rows][cols]);
        if (rows <= cols + 1)
            dfs(matrix,rows,cols+1,max_rows,max_cols,visited,ans);//go right
        dfs(matrix,rows+1,cols,max_rows,max_cols,visited,ans);//go down
        dfs(matrix,rows,cols-1,max_rows,max_cols,visited,ans);//go left
        dfs(matrix,rows-1,cols,max_rows,max_cols,visited,ans);//go up
        
    }
};

int main()
{
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans;
    Solution obj;
    ans=obj.spiralOrder(matrix);
    for(auto i:ans)
    {
        std::cout << i << " ";
    }
    return 0;
}