class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr[0].size();

        vector<vector<int>> dp(row , vector<int>(col , 0));

        for(int i = 0 ; i<row ; i++){
            for(int j = 0 ; j<col ; j++){
                if(arr[i][j] == 1) continue;
                if(i == 0 && j == 0) {dp[i][j] = 1 ; continue;}

                int take1= 0;
                int take2 = 0;
                if(i-1>=0) take1 = dp[i-1][j];
                if(j-1>=0) take2 = dp[i][j-1];

                dp[i][j] = take1+take2; 
            }
        }

        return dp[row-1][col-1];
        
    }
};