class Solution {
public:
    int helper(vector<vector<int>> &arr , int i , int j , vector<vector<int>> &dp){
        if(j>=arr[i].size() || i>=arr.size()) return 1e6;
        if(i == arr.size()-1) return arr[i][j];
        if(dp[i][j] != -1) return dp[i][j];
        int down = arr[i][j] + helper(arr , i+1 , j , dp);
        int right = arr[i][j] + helper(arr , i+1 , j+1 , dp);

        return dp[i][j] = min(down , right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();
        vector<vector<int>> dp(row , vector<int>(row , 0));
        for(int i = 0 ; i<row ; i++){
            dp[row-1][i] = triangle[row-1][i];
        }

        for(int i = row-2 ; i>=0 ; i--){
            for(int j = i ; j>=0 ; j--){
                int down = 1e6;
                int right = 1e6;

                if(i+1<row) down = triangle[i][j] + dp[i+1][j];
                if(i+1<row && j<triangle[i].size())right = triangle[i][j] + dp[i+1][j+1];

                dp[i][j] = min(down , right);
            }
        }


        return dp[0][0];
        
    }
};