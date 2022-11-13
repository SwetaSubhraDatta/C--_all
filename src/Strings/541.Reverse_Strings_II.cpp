#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string final="";


void reversed(vector<char>&s,int k);
string reverse_String(string& s,int k)
{
    int n=s.length();
    for(int i=0;i<n;i+=2*k)
    {
        string str=s.substr(i,k);
        reverse(str.begin(),str.end());
        s.replace(i,k,str);
    }
return s;
}

int main()
{
    string s="abcdefg";
    int k=2;
    reverse_String(s,k);
    cout<<s<<endl;
}
