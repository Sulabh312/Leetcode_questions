class Solution {
public:
    string helper(string s, int k){
        int n = s.length();
        if(n <= k) return s;
        string s2 = "";
        int cur = 0;
        for(int i = 0; i < n; i++){
            if(i > 0 && 0 == i%k) {
                s2 += to_string(cur);
                cout << cur << endl;
                cur = 0;
            }
            cur += s[i] - '0';
        }
        s2 += to_string(cur);
        return helper(s2, k);
    }
    string digitSum(string s, int k) {
        return helper(s, k);
    }
};