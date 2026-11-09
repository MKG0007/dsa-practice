class Solution {
public:

    void helper(vector<int> &arr , int target , int index , vector<int> &temp , vector<vector<int>> &ans){
        if(index >= arr.size()){
            if(target == 0){
                ans.push_back(temp);
            }
        return;
        }

        if(target - arr[index] >= 0){
            temp.push_back(arr[index]);
            helper(arr , target-arr[index] , index , temp , ans);
            temp.pop_back();

        }
        helper(arr , target , index+1 , temp , ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        

        vector<vector<int>> ans;
        vector<int> temp;

        helper(candidates , target , 0 , temp , ans);

        return ans;
    }
};