class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n < 1) return false;
        return solve(n);
    }
    bool solve(int n){
        if(n == 1) return true;
        if(n%4) return false;
        return solve(n >> 2);
    }
};