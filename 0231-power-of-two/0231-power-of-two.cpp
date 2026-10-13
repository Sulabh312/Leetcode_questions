class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1) return false;
        return solve(n);
    }
    bool solve(int n){
        if(n == 1) return true;
        if(n%2) return false;
        return solve(n/2);
    }
};