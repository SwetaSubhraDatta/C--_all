#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;


class node
{
    public:
        int data;
        node *next;

        node(int data)
        {
            this->data = data;
            this->next = nullptr;
        };

};


class node_d
{
    public:
        int data;
        node_d* next;
        node_d* prev;

        node_d(int data)
        {
            this-> data= data;
            this->next = nullptr;
            this->prev = nullptr;
        }

};


class LL 
{

public:
    node *head=nullptr;//head of the list
    node *tail=nullptr;//tail of the list
    int size; // size of the linked list

    void add(node* n);
    void pop (int index);
    void pop_data(int data);
    void push(node *n);
    void insert(node *n,int index);
    void print();
    void reverse(bool recursive);
    void sort();
    void merge(LL *root_1,LL *root_2);

};

class DLL
{
    public:
        node_d *head=nullptr;//head of the list
        node_d *tail=nullptr;//tail of the list
        int size; // size of the linked list
        void add(node_d* n);
        void pop (node_d *n);
        void push(node_d *n);
        void insert(node_d *n,int index);
        void print();
        void reverse();
        void sort();
        void merge(DLL *root_1,DLL *root_2);
};

class CLL
{

    public:
        node* head=nullptr;
        node* tail=nullptr;
        int size;
        void add(node* n);
        void pop (node *n);
        void push(node *n);
        void insert(node *n,int index);
        void print();
        void reverse();
        void sort();
};

class D_CLL
{

};