class Solution {
public:

    int helper(int num){
        if(num == 0 || num == 1) return num;

        return helper(num-1) + helper(num-2);
    }
    int fib(int n) {
        if(n == 0 || n == 1) return n;

        return helper(n);
        
    }
};