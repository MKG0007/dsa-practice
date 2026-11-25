class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int size = arr.size();
        if(size == 0) return {-1 , -1};
        unordered_map<int , int> m;

        for(int i = 0 ; i<size ; i++){
            int n2 = target-arr[i];

            if(m.find(n2) != m.end()){
                return {i , m[n2]};
            }

            m[arr[i]] = i;
        }

        return {-1 , -1};
        
    }
};