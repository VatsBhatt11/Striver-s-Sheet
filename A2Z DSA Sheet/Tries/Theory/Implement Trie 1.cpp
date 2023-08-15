class TrieNode
{
public:
    TrieNode* child[26];
    bool isWord;
    TrieNode()
    {
        isWord=false;
        for(auto &it:child)
            it=NULL;
    }
};

class Trie {
    TrieNode* root;
public:
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* p=root;
        for(auto it:word)
        {
            int i=it-'a';
            if(!p->child[i])
                p->child[i]=new TrieNode();
            p=p->child[i];
        }
        p->isWord=true;
    }
    
    bool search(string word,bool var=false) {
        TrieNode* p=root;
        for(auto it:word)
        {
            int i=it-'a';
            if(!p->child[i])
                return false;
            p=p->child[i];
        }
        if(var==false)
            return p->isWord;
        return true;
    }
    
    bool startsWith(string prefix) {
        return search(prefix,true);
    }
};