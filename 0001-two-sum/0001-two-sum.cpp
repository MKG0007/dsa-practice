class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();

        unordered_map<int , int> m;
        for(int i = 0 ; i<size ; i++){
            int num = target-nums[i];
            if(m.find(num) != m.end()){
                return {i , m[num]};
            }

            m[nums[i]] = i;
        }

        return {-1 , -1};
    }
};