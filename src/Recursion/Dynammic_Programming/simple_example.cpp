#include <iostream>
#include <vector>

using namespace std;
void reachHome(int src,int dest)
{
    if(src==dest)
    {
        cout<<"Reached Home"<<endl;
        return;
    }
    src+=1;
    reachHome(src,dest);
}

int main()
{
    int src=2;
    int dest=10;
    reachHome(src,dest);
}