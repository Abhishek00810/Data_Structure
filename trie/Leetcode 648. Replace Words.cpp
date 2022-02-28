class Solution {
public:
    vector<string> words;
    struct trie
    {
        unordered_map<char, trie*> mp;
        bool endword;
    };
    
    void insert(trie* root, string word)
    {
        for(int i = 0;i<word.length();i++)
        {
            if(root->mp.find(word[i])==root->mp.end())
            {
                root->mp[word[i]] = new trie();
            }
            root = root->mp[word[i]];
        }
        root->endword = true;
    }
    
    
    void sentence(string s)
    {
        string temp = "";
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                words.push_back(temp);
                temp = "";
            }
            else
            {
                temp+=s[i];
            }
        }
           words.push_back(temp);
    }
   
    
    string  checker(trie* root, string s)
    {
        string temp = "";
        for(int i = 0;i<s.length();i++)
        {
            if(root->endword)
            {
                break;
            }
            if(!root || root->mp.find(s[i])==root->mp.end())
            {
                temp = s;
                break;
            }
            temp += s[i];
            root = root->mp[s[i]];
        }
        return temp;
    }
    string replaceWords(vector<string>& s, string t) {
        trie* root = new trie();
        for(int i = 0;i<s.size();i++)
        {
            insert(root, s[i]);
        }
        
        sentence(t);
        string ans;
        
        for(int i = 0;i<words.size();i++)
        {
            ans+=checker(root, words[i]);
            if(i!=words.size()-1)
            {
                ans+=' ';
            }
        }
        return ans;
    }
};
