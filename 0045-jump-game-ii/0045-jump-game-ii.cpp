class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        int r = 0;
        int l = 0;
        int jump = 0;

        while(r<size-1){
            int farest = 0;
            for(int i = l ; i<=r ; i++){
                farest = max(farest , i+nums[i]);
            }
            l = r+1;
            r = farest;
            jump++;
        }

        return jump;
        
    }
};