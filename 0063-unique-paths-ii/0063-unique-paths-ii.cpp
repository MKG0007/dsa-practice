class Solution {
public:

    int helper(vector<vector<int>> &arr , int ii , int jj , vector<vector<int>> &dp ){
        if(ii<0 || jj<0 || arr[ii][jj] == 1) return 0;
        if(ii == 0 && jj == 0) return 1;
        if(dp[ii][jj] != -1) return dp[ii][jj];
        int up = helper(arr , ii-1 , jj , dp);
        int down = helper(arr , ii , jj-1 , dp);

        return dp[ii][jj] = up+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr[0].size();

        vector<vector<int>> dp(row , vector<int>(col , -1));

        return helper(arr , row-1 , col-1 , dp);
        
    }
};