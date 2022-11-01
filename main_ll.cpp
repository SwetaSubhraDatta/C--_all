#include "ll.hpp"



void ctest_add()
{
  LL *list= new LL();
   for(int i=0;i<7;i++)
   {
    node *n= new node(i);
    list->add(n);
   }
   list->print();
    delete list;    
}

void ctest_pop()
{
    LL *list= new LL();
    for(int i=0;i<7;i++)
    {
        node *n= new node(i);
        list->add(n);
    }
    list->pop(0);
    list->print();
    list->pop(3);
    list->reverse(false);
    list->print();
    list->pop_data(7);
    list->pop_data(5);
    list->pop_data(0);
    list->print();
    delete list;
}
int main()
{
    ctest_add();
    ctest_pop();
 
}