class Solution {
public:

    int helper(vector<vector<int>> &arr , int i , int j , vector<vector<int>> &dp){
        if(i == 0 && j == 0) return arr[i][j];
        if(i<0 || j<0) return 10e6;
        if(dp[i][j] != -1) return dp[i][j];
        int up = arr[i][j] + helper(arr , i-1 , j , dp);
        int left = arr[i][j] + helper(arr , i , j-1 , dp);

        return dp[i][j] = min(up , left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row , vector<int>(col , -1));
        return helper(grid , row-1 , col-1 , dp);
    }
};