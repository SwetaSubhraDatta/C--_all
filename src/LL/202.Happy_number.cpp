#include <vector>
#include <iostream>

using namespace std;


class Solution
{


    int digitSquareSum(int n)
    {
        int sum=0;
        while(n>0)
        {
            int digit=n%10;
            sum+=digit*digit;
            n=n/10;
        }
        return sum;
    }

    bool ishappy(int n)
    {
       int temp=n;
       while(1)
       {
        if(temp==1)
            return true;
        else if(temp==4)
            return false;
        else
            temp=digitSquareSum(temp);
       }
    }

    bool isHappy(int n) {
        int slow = digitSquareSum(n);
        int fast = digitSquareSum(digitSquareSum(n));
        
        while(slow != fast)
        {
            slow = digitSquareSum(slow);
            fast = digitSquareSum(digitSquareSum(fast));
        }
        
        return fast == 1 ;
    }


};