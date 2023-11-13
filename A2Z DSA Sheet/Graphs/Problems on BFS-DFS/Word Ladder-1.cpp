class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int steps = 1;
        unordered_set<string> st(wordList.begin(),wordList.end());
        st.erase(beginWord);
        queue<pair<string,int>>q;
        q.push({beginWord,steps});
        while(!q.empty())
        {
            string s = q.front().first;
            steps = q.front().second;
            q.pop();
            if(s == endWord)
                return steps;
            for(int i=0;i<s.size();i++)
            {
                char original = s[i];
                for(char ch = 'a';ch<='z';ch++)
                {
                    s[i] = ch;
                    if(st.find(s) != st.end())
                    {
                        st.erase(s);
                        q.push({s,steps+1});
                    }
                }
                s[i] = original;
            }
        }
        return 0;
    }
};