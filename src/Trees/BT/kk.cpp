#include <iostream>
#include <vector>

using namespace std;


class shreedhar
{
    public:

    int a=20;
    int b=20;//charcacter //member variables 
    shreedhar()
    {
        this->a=30;

    }

    shreedhar(int a=20)
    {
        this->a=a;
    }
 
    bool hello() //member functions
    {
        this->a=30;
        cout<<a<<endl;
        return true;
    }

    static void help()
    {
        cout<<"this is static"<<endl;
    }

};

class B:private shreedhar
{
    public:
    int a=40;
    int b=20;
    B()
    {
        this->a=70;
        this->b=90;

    }
    public:
    void hi()
    {
       cout<<"HI"<<endl; 
    }

    ~B()
    {
        this->a=0;
        this->b=0;
    }

};



int main()
{
    shreedhar::help();
}