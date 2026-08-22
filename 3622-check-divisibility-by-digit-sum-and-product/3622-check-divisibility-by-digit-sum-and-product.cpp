class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, multi = 1;
        int temp = n;
        while(temp){
            int temp2 = temp%10;
            sum += temp2;
            multi *= temp2;
            temp /= 10;
        }
        return !(n % (sum+multi));
    }
};