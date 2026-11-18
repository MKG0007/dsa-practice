class Solution {
public:
    int helper(int i , int j , vector<vector<int>> &dp){
        if(i<0 || j<0) return 0;
        if(i == 0 && j == 0) return 1;

        if(dp[i][j] != -1) return dp[i][j];

        int takeUp = helper(i-1 , j , dp);
        int takeLeft = helper(i , j-1 , dp);

        return dp[i][j] = takeUp + takeLeft;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m , vector<int>(n , 0));
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(i == 0 && j == 0) {dp[0][0] = 1; continue;}

                int take1 = 0;
                int take2 = 0;
                if(i-1>=0) take1 = dp[i-1][j];
                if(j-1>=0) take2 = dp[i][j-1];
                

                dp[i][j] = take1+take2;

            }
        }

        return dp[m-1][n-1];
        
    }
};