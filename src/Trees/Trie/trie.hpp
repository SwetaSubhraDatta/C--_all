/** This module helps to implement the trie 
 * data structure.
*/

#include <iostream>
#include <vector>

using namespace std;

class TrieNode
{
    public:
        char data;
        vector<TrieNode*>links;
        bool isTerminal;
        TrieNode(char data)
        {
            this->data=data;
            this->links.resize(26,nullptr);
            this->isTerminal=false;
        }

        bool containsKey(char ch)
        {
            return links[ch-'a']!=nullptr;
        }

        TrieNode* getKey(char ch)
        {
            return links[ch-'a'];
        }

        void setKey(char ch,TrieNode *node)
        {
            links[ch-'a']=node;
        }

        void setTerminal()
        {
            isTerminal=true;
        }

        bool checkIfTerminal()
        {
            return isTerminal;
        }

};


class Trie
{
    public:
        TrieNode *root;
        void insert(TrieNode* root,string word);
        void printTrie(TrieNode *root);
        bool search(TrieNode *root,string word);
        bool startsWith(TrieNode *root,string word);


};