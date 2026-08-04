class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(0 > N){
            x = 1 / x;
            N = -N;
        }
        return solve(x, N);
    }
    double solve(double x, int n){
        if(0 == n) return 1;

        double half = solve(x, n / 2);

        if (n % 2 == 0)
            return half * half;

        return x * half * half;
    }
};