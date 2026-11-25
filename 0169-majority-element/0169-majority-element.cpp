class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int size = arr.size();
        int count = 0;
        int num = 0;
        int ans = 0;
        for(int i = 0 ; i<size ; i++){
            if(count == 0){
                num = arr[i];
                count = 1;
            }
            else if(num == arr[i]){
                count++;
            }
            else{
                count--;
            }
        }


        return num;
    }
};