class Solution {
public:
    int trap(vector<int>& arr) {

        int size = arr.size();

        vector<int> left(size , 0);
        vector<int> right(size , 0);
        
        left[0] = arr[0];
        right[size-1] = arr[size-1];

        for(int i = 1 ; i<size ; i++){
            left[i] = max(left[i-1] , arr[i]);
        }

        for(int i = size-2 ; i>=0 ; i--){
            right[i] = max(right[i+1] , arr[i]);
        }
        int ans = 0;
        for(int i = 0 ; i<size-1 ; i++){
            int temp = min(left[i] , right[i])-arr[i];
            ans += temp;
        }

        return ans;
    }
};