class Solution {
public:

    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<int> prev(col , 0);
        for(int i = 0 ; i<row ; i++){
            vector<int> crr(col , 0);
            for(int j =  0 ; j<col ; j++){
                if(i == 0 && j == 0) {crr[0] = grid[i][j]; continue;}
                int up = 10e6;
                int left = 10e6;

                if(i-1>=0) up = grid[i][j] + prev[j];
                if(j-1 >=0) left = grid[i][j] + crr[j-1];

                crr[j] = min(up , left);

            }
            prev = crr;
        }
        return prev[col-1];
    }
};