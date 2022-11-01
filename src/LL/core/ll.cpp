#include "ll.hpp"



void LL::add(node *n)
{
    if(size==0)
    {
        head=n;
        tail=n;
    }

    else
    {
        n->next=head;
        head=n;
    }
    size+=1;

}


void LL::pop(int index)
{
    if (index==0)
    {
        head=head->next;
    }

    else
    {
        node* temp=head;
        node* prev=nullptr;
        for(int i=0;i<index;i++)
        {
            if(i==index-2)
            {
                prev=temp;
            }
            else if(i==index-1)
            {
                prev->next=temp->next;
                temp=temp->next;
            

            }
            if(temp)
                temp=temp->next;
            else
            {
                throw "Index out of bounds";
            }

        }
        
    }
    size-=1;
}


void LL::pop_data(int data)
{
    node* temp=head;
    node* prev=head;
    auto data_is_front=[&](node *&temp,int data)
    {
        while (temp and temp->data==data)
        {
            head=temp->next;
            temp=head;
            
        }
    };

    data_is_front(temp,data);

    while(temp and temp->next!=nullptr)
    {
        // if I got the location
        if(temp->data==data)
        {
            prev->next=temp->next; //DELETE IT 
            
        }
        else
        {
            prev=temp;
        }
        temp=temp->next;
    }

    if (temp and temp->data==data)
    {
        prev->next=nullptr;
        temp=prev;
        tail=temp;
    }
}


void LL::reverse(bool recursive)
{
    if (not recursive)
    {
    if(!head || head->next==nullptr)
    {
        return;
    }
    node *current=head;
    node* previous=nullptr;
    while(current)
    {
        node * next=current->next;
        current->next=previous;
        previous=current;
        current=next; 
    }
    head=previous;
    }

    else
    {

    }
}

void LL::print()
{
    node * temp=head;
    cout<<"[";
    while(temp)
    {
        cout<<" "<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<" null ]"<<endl;
}