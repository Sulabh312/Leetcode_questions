class Solution {
public:
    string findLatestTime(string s) {
        string ans = "";
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s[i] == '?'){
                if(i == 0) {
                    if(s[1] == '0' or s[1] == '1' or s[1] == '?') ans += '1';
                    else ans += '0';
                }
                if(i == 1){
                    if(s[i-1] == '1' or s[i-1] == '?') ans += '1';
                    else ans += '9';
                }
                if(i == 3) ans += '5';
                if(i == 4) ans += '9';
            }
            else ans += s[i];
        }
        return ans;
    }
};