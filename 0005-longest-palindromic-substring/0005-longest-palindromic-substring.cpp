class Solution {
public:
    void ans2(string &s, int l, int r,int &anslength, string &ans, int &n){
        while(l > -1 && r < n && s[l] == s[r]){
            if(ans.length() < r - l  + 1){
                ans = "";
                anslength = r - l + 1;
                for(int k = l; k <= r; k++){
                    ans += s[k];
                }
            }
            l--;
            r++;
        }
    }
    string longestPalindrome(string s) {
        string ans = "";
        int anslen = 0;
        int n = s.length();
        for(int i = 0; i < n; i++){
            int l = i, r = i;
            ans2(s, l, r, anslen, ans, n);
            l = i, r = i+1;
            ans2(s, l, r, anslen, ans, n);
        }
        return ans;
    }
};