class Solution {
public:

    int fib(int n) {
        if(n == 0 || n == 1) return n;
        int pre2 = 0;
        int pre1 = 1;

        for(int i = 2 ; i<=n ; i++){
            int crr = pre1 + pre2;
            pre2 = pre1;
            pre1 = crr;
        }
        return pre1;
        
    }
};