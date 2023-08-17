class TrieNode
{
public:
    TrieNode* child[26];
    int prefcnt;
    bool isWord;
    int wdcnt;
    TrieNode()
    {
        isWord=false;
        prefcnt=wdcnt=0;
        for(auto &it:child)
            it=NULL;
    }
};

class Trie
{
    TrieNode* root;
public:
    Trie()
    {
        root=new TrieNode();
    }
    /*void insert(string s)
    {
        TrieNode* temp=root;
        for(auto it:s)
        {
            int i=it-'a';
            if(!temp->child[i])
                temp->child[i]=new TrieNode();
            temp=temp->child[i];
            temp->prefcnt++;
        }
        temp->isWord=true;
        temp->wdcnt++;
    }

    bool search(string s,bool var=false)
    {
        TrieNode* temp=root;
        for(auto it:s)
        {
            int i=it-'a';
            if(!temp->child[i])
                return false;
            temp=temp->child[i];
        }
        if(var==false)
            return temp->isWord;
        return true;
    }*/

    int helper(string s)
    {
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            TrieNode* temp=root;
            for(int j=i;j<s.size();j++)
            {
                int x=s[j]-'a';
                if(!temp->child[x])
                {
                    cnt++;
                    temp->child[x]=new TrieNode();
                }
                temp=temp->child[x];
            }
        }
        return cnt+1;
    }
};

int countDistinctSubstrings(string &s)
{
    Trie ans;
    return ans.helper(s);
}