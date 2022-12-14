class Solution {
public:
    bool isValid(string s) {
        const int N = s.length();
        char stack[N];
        int flag[256];
        memset(flag, -1, sizeof(flag));
        flag['('] = 0;
        flag[')'] = 1;
        flag['['] = 2;
        flag[']'] = 3;
        flag['{'] = 4;
        flag['}'] = 5;
        int top = -1;
        for(int i = 0; i < N; ++i)
        {
            if(flag[s[i]] % 2 == 0){
                stack[++top] = s[i];
            }else
            {
                if(top != -1 && flag[stack[top]] / 2 == flag[s[i]] /2)
                    --top;
                else
                    return false;
            }
        }
        return top == -1;
    }
};
