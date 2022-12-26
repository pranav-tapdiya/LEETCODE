class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<int,int> lettersStore;
        for(int ch=0;ch<s.length();ch++)
        {
            lettersStore[s[ch]]++;
        }
        for(int ch=0;ch<s.length();ch++)
        {
            if(lettersStore[s[ch]] == 1)
                return ch;
        }
        return -1;
    }
};
