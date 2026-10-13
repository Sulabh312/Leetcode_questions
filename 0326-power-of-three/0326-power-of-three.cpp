class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 1) return false;
        return pow(n);
    }
    bool pow(int n){
        if(n == 1) return true;
        if(n%3) return false;
        return pow(n/3);
    }
};