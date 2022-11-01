#include "bt.hpp"

void solve(Node * root, vector<int>& ans,int level)
{
    if(!root)
    {
        return;
    }
    if(ans.size()==level)
    {
        ans.push_back(root->data);
    }
    solve(root->right,ans,level+1);
    solve(root->left,ans,level+1);
}

vector<int>leftview_with_recursion(Node* root,vector<vector<int>>&ans)
{
    vector<int>temp;
    solve(root,temp,0);
    return temp;


}

vector<vector<int>>leftview_level_order(Node * root,vector<vector<int>>&ans)
{
    //lets make the queue
    queue<Node*>q;
    if(root==nullptr)
    {
        return ans;
    }
    q.push(root);

    while(!q.empty())
    {
        vector<int>levels;
        int level_size=q.size();
     
        for(int i=0;i<level_size;i++)
        {
            Node * temp=q.front();
            q.pop();
            if (i==0)
            {
                levels.push_back(temp->data);
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        ans.push_back(levels);
    }
    return ans;

}


vector<vector<int>>BT::right_view(Node *n)
{
    vector<vector<int>>ans;
     queue<Node*>q;
    if(root==nullptr)
    {
        return ans;
    }
    q.push(root);

    while(!q.empty())
    {
        vector<int>levels;
        int level_size=q.size();
     
        for(int i=0;i<level_size;i++)
        {
            Node * temp=q.front();
            q.pop();
            if (i==level_size-1)
            {
                levels.push_back(temp->data);
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        ans.push_back(levels);
    }
    return ans;
    
}


vector<int> BT::top_view(Node* root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
    map<int,int>mp;
    queue<pair<Node*,int>>q;
    //Push the root node and its horizontal distance
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int>temp=q.front();
        Node *frontNode=temp.first;
        int hd=temp.second;
        //pOP THE QUEUE
        q.pop();
        if(mp.find(hd)==mp.end()) // or m[hd]==0 //that is key is not present
        {
            mp[hd]=frontNode->data;
        }
        else{
            continue;
        }
        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right,hd+1));
        }
    }


    //Now fill the values from the map
    for(auto i :mp)
    {
        ans.push_back(i.second);
    }

    return ans;

}


vector<int>BT::bottom_view(Node *)
{
        vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
    map<int,int>mp;
    queue<pair<Node*,int>>q;
    //Push the root node and its horizontal distance
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int>temp=q.front();
        Node *frontNode=temp.first;
        int hd=temp.second;
        //pOP THE QUEUE
        q.pop();
        mp[hd]=frontNode->data;
        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right,hd+1));
        }
    }


    //Now fill the values from the map
    for(auto i :mp)
    {
        ans.push_back(i.second);
    }

    return ans;
}



vector<vector<int>>BT::left_view(Node *n,bool recursion)
{
    vector<vector<int>>recursion_ans;
    vector<vector<int>>iterative_ans;
    if (recursion)
    {
        leftview_with_recursion(n,recursion_ans);
    }
    else
    {
        leftview_level_order(n,iterative_ans);

    }

    return iterative_ans;

}


