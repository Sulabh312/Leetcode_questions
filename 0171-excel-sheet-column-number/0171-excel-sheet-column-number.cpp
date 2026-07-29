class Solution {
public:
    int titleToNumber(string cT) {
        reverse(cT.begin(), cT.end());
        int i = 0;
        int ans = 0;
        for(char c : cT)  ans += (c - 'A' + 1)*pow(26, i++);
        return ans;
    }
};