#include <iostream>
#include <vector>

using namespace std;

class dp
{
public:
    vector<int> cache_dp;
    dp(int n)
    {
        cache_dp.resize(n + 1,-1);
    }

    int fib(int n)
    {
        // Base Case
        if (n == 0 || n == 1)
        {
            return n;
        }
        // Dp Case
        if (cache_dp[n] != -1)
        {
            return cache_dp[n];
        }

        cache_dp[n] = fib(n - 1) + fib(n - 2);
        return cache_dp[n];
    }

    int fib_tabulation(int n)
    {
        int current= 1;
        int prev =0;
        int next=-1;
        cache_dp[0] = prev;
        cache_dp[1] = current;


        for(int i=2;i<=n;i++)
        {
            next=prev+current;
            prev=current;
            current=next;
            cache_dp[i]=next;
          
        }
    }

    ~dp()
    {
        cache_dp.clear();
    }
};

int main()
{
    int n = 10;
    dp obj(n);
    obj.fib_tabulation(n);
    for(auto i: obj.cache_dp)
    {
        cout << i << " ";
    }
}