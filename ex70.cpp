class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        else{
            int DP[n+1];
        DP[0]=0;
        DP[1] = 1;
        DP[2] = 2;
        int i;
        for(i=3; i<=n; i++)
            DP[i] = DP[i-2] + DP[i-1];
        return DP[n];
        }
    }
};
