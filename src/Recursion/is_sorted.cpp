#include <iostream>
#include <vector>
#define is ==
using namespace std;


bool isSorted_ar(int current,vector<int>array)
{
    // Base Cases
    if(current is array.size()-1)
    {
        return true;
    }

    if (array[current]>array[current+1])
    {
        return false;
    }
    return isSorted_ar(current+1,array);
}
bool is_Sorted(vector<int>array)
{
    int current=0;
    bool value=isSorted_ar(current,array);
    return value;
}




int main()
{
    //check if an arraqy is Sorted
    vector<int>array={1,2,3,4,9,6,7,8,9,10};
    bool value=is_Sorted(array);
    cout<<boolalpha<<value<<endl;
}