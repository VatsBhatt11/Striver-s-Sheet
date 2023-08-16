class TrieNode
{
public:
    TrieNode* child[26];
    bool isWord;
    int word_cnt;
    int prefix_cnt;
    TrieNode()
    {
        isWord=false;
        for(auto &it:child)
            it=NULL;
        word_cnt = 0;
        prefix_cnt = 0;
    }
};


class Trie
{
    TrieNode* root;
public:
        Trie() {
            root = new TrieNode();
        }
    
        void insert(string word)
        {
            TrieNode* tmp = root;
            for(char ch : word)
            {
                int index = ch - 'a';
                if(!tmp->nodes[index])
                    tmp->nodes[index] = new TrieNode();
                tmp = tmp->nodes[index];
                tmp->prefix_cnt++;
            }
            tmp->word_cnt++;
        }
    
        int countWordsEqualTo(string word)
        {
            TrieNode* tmp = root;
            for(char ch : word)
            {
                int index = ch - 'a';
                if(!tmp->nodes[index]) 
                    return 0;
                tmp = tmp->nodes[index];
            }
            return tmp->word_cnt;
        }
    
        int countWordsStartingWith(string prefix)
        {
            TrieNode* tmp = root;
            for(char ch : prefix)
            {
                int index = ch - 'a';
                if(!tmp->nodes[index])
                    return 0;
                tmp = tmp->nodes[index];
            }
            return tmp->prefix_cnt;
        }
    
        void erase(string word)
        {
            TrieNode* tmp = root;
            for(char ch : word)
            {
                int index = ch - 'a';
                tmp = tmp->nodes[index];
                tmp->prefix_cnt--;
            }
            tmp->word_cnt--;
        }
};
