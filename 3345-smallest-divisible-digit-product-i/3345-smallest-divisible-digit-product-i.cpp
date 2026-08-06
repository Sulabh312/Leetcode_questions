class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n; i > n -1; i++){
            int sum = 1;
            int temp = i;
            while(temp){
                sum  *= temp%10;
                temp /= 10;
            }
            if(sum % t == 0) return i;
        }
        return 0;
    }
};