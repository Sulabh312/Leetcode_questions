class Solution {
public:
    int largestInteger(int n, int s) {
        if (s == 0) return 0;
        n = pow(10, n);
        int ans = -1;
        for(int i = n/10; i < n; i++){
            int sum = 0;
            int temp = i;
            while(temp){
                sum += temp%10;
                temp = temp/10;
            }
            if(sum == s) ans = i;
        }
        return ans;
    }
};