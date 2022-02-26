class Solution {
public:
    //trie function
    struct trie
    {
        unordered_map<char, trie*> mp;
        vector<string> suggestion;
    };
    void insert(trie* root, string word)
    {
        for(auto i:word)
        {
            if(root->mp.find(i)==root->mp.end())
            {
                root->mp[i] = new trie();
            }
            root = root->mp[i];
            
            if(root->suggestion.size()<3)
            {
                root->suggestion.push_back(word);
            }
        }
    }
    vector<vector<string>> solve(vector<string> &products, string word)
    {
        vector<vector<string>> res(word.size());
        sort(products.begin(), products.end());
        trie* root = new trie();
       for(const string &word: products)
            insert(root, word);
        
        int i = 0;
        for(auto c:word)
        {
            auto it = root->mp.find(c);
            if(it == root->mp.end())
            {
                break;
            }
            else
            {
                root = it->second;
            }
            res[i] = (root->suggestion);
            i++;
        }
        return res;
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        return solve(products, searchWord);
    }
};
