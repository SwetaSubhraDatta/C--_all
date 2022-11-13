#include <iostream>
#include <vector>

using namespace std;

double myPow(double x,int  n)
{
    if(n==0)
    {
        return 1;
    }

    if (n==1)
    {
        return x;
    }

    int ans=myPow(x,n/2);

  if(n % 2==0)
  {
        return ans*ans;
    }
    else
    {
        return ans*ans*x;
  }
}

int main()
{
    double x=2.00000;
    int n=8;
    cout<<myPow(x,n)<<endl;
    return 0;
}