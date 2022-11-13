#include "trie.hpp"


int main()
{
    Trie *obj=new Trie();
    obj->root=new TrieNode('\0');
    obj->insert(obj->root,"apple");
    obj->insert(obj->root,"app");
    obj->printTrie(obj->root);

}
