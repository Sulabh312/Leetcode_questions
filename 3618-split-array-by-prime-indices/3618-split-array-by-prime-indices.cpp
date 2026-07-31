class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> A, B;
        for(int i = 0; i < n; i++){
            if(isPrime(i)) A.push_back(nums[i]);
            else B.push_back(nums[i]);
        }
        long long sumA = 0, sumB = 0;
        for(int i : A) sumA += i;
        for(int i : B) sumB += i;
        return abs(sumA - sumB);
    }
};