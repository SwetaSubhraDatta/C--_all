#include "trie.hpp"

void Trie::insert(TrieNode* root,string word)
{
    TrieNode* temp=root;
    for(int i=0;i<word.size();i++)
    {
        char currentChar=word[i];
        if(temp->containsKey(currentChar))
        {
            temp->getKey(currentChar); //Get the node
        }
        else
        {
            TrieNode *node=new TrieNode(currentChar);//Create a new node
            temp->setKey(currentChar,node); //Set the key
            temp=node; //Update the temp pointer to the new node
        }

    }
    temp->setTerminal();
}

bool Trie ::search(TrieNode * root, string word)
{
    //Step 1: Get the root node into a temp variable so that the root pointer does not change
    TrieNode *temp=root;
    //Step 2: Iterate over the word
    for(int i=0;i<word.size();i++)
    {
        //Step 3: Get the current character
        char currentChar=word[i];
        //Step 4: Check if the current character is present in the links
        if(temp->containsKey(currentChar))
        {
            //Step 5: If the current character is present in the links, then get the node
            temp=temp->getKey(currentChar);
        }
        else
        {
            //Step 6: If the current character is not present in the links, then return false
            return false;
        }
    }

    return temp->checkIfTerminal();
}


bool Trie ::startsWith(TrieNode * root,string word)
{
    //Step 1: Get the root node into a temp variable so that the root pointer does not change
    TrieNode *temp=root;
    //Step 2: Iterate over the word
    for(int i=0;i<word.size();i++)
    {
        //Step 3: Get the current character
        char currentChar=word[i];
        //Step 4: Check if the current character is present in the links
        if(temp->containsKey(currentChar))
        {
            //Step 5: If the current character is present in the links, then get the node
            temp=temp->getKey(currentChar);
        }
        else
        {
            //Step 6: If the current character is not present in the links, then return false
            return false;
        }
        //Now no need to check if the node is terminal or not
        //As we are searching for the prefix
    }
        return true;

}


void Trie::printTrie(TrieNode* root)
{
    TrieNode *temp=root;
    if(temp==nullptr)
    {
        return;
    }
    for(int i=0;i<temp->links.size();i++)
    {
        if(temp->links[i]!=nullptr)
        {
            std::cout << temp->links[i]->data << std::endl;
            printTrie(temp->links[i]);
        }
    }
}