#include<bits/stdc++.h>
using namespace std;
struct trie
{
    unordered_map<char,trie*> mp; 
    bool isendofword;
};
void insert(trie* root, string word) //reference and word will be taken out
{
    trie* current = root; //iterator
    for(int i = 0;i<word.length();i++)
    {
        if(current->mp.find(word[i])==current->mp.end())
        {
            //it means we dont have that character in our string 
            current->mp[word[i]] = new trie();
        }
        current = current->mp[word[i]];
    }

    current->isendofword = true;
}
bool search(trie* root, string word)
{
    trie* current = root;
    for(auto c:word)
    {
        if(current->mp.find(c)==current->mp.end())
        {
            return false;
        }
        current = current->mp[c];
    }
    return current->isendofword;
}
int main()
{
    trie* root = new trie();
    insert(root, "abcd");
    cout<<search(root, "abc");
}
