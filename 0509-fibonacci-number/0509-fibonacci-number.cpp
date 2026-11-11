class Solution {
public:

    int helper(int num , vector<int> &dp){
        if(num == 0 || num == 1) return num;
        if(dp[num] != -1) return dp[num];
        return dp[num] =  helper(num-1 , dp) + helper(num-2 , dp);
    }
    int fib(int n) {
        if(n == 0 || n == 1) return n;
        vector<int> dp(n+1 , -1);
        return helper(n , dp);
        
    }
};