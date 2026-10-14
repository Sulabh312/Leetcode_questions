class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum < 1 || sum > 9 * num ) return "";
        string val = "";
        for(int i = 0; i < num; i++){
            int digit = min(9, sum);
            val += char('0' + digit);
            sum -= digit;
        }
        return val;
    }
};