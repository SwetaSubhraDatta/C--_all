//Implement circular queue using vectors
#include <iostream>
#include <vector>
using namespace std;
class CQ
{
public:
  int size;
  int head=0;
  int tail=0;
  bool empty=true;
  //init an empty vector
  vector<int>queue;

  CQ(int size)
  {
    this->size=size;
    queue.resize(size);
  }

  bool isFull()
  {
    if(!empty and head==tail)
    {
        return true;
    }
  }

  vector<int> enqueue(int data)
  {
    if(isFull())
    {
        cout<<"Qeuue is full";
        return queue;
    }
    else
    {
        queue[tail]=data;//insert data at tail
        tail=tail+1;//increment tail
        if(tail==size)//if tail is at the end of the queue
        {
            empty=false;//it is not empty
            tail=0;//reset tail to 0
        }
        return queue;
    }
  }

  int peek(int &value)
  {
    return value;
  }

  vector<int>dequeue(int data)
  {
    if(!empty)
    {
        int value=queue[head];
        queue[head]=0;
        head=head+1;
        if(head==tail)
        {
            empty=true;
        }
        if(head==size)
        {
            head=0;
        }
        return queue;
    }
    else
    {
        cout<<"Queue is empty";
        return queue;
    }

  }

    void print()
    {
       for(int i=0;i<queue.size();i++)
       {
           cout<<queue[i]<<"-> ";

       }
       cout<<"-->"<<queue[0]<<endl;
    }

};
int main()
{
    CQ q(5);

}