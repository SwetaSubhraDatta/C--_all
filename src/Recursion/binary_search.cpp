#include <iostream>
#include <vector>

using namespace std;


bool helper(vector<int> &array, int start, int end, int key);
void print(vector<int> &array);
bool binary_search(vector<int> &array,int key)
{
    int start=0;
    int end= array.size()-1;
    return helper(array,start,end,key);
}

void print(vector<int> &array,int start,int end)
{
    for(int i=start;i<=end;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
bool helper(vector<int> &array, int start, int end, int key)
{
    print(array,start,end);
    // Base case
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start)/ 2;
    // Base case
    if (array[mid] == key)
    {
        cout<<"Found at pos "<<mid<<endl;
        return true;
    }

    if (array[mid] < key)
    {
        bool left = helper(array, mid + 1, end, key);
        return left;
    }
    else
    {
        bool right = helper(array, start , mid - 1, key);
        return right;
    }
}

int main()
{
    //do binary search
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 9;
    bool value = binary_search(array, key);
}