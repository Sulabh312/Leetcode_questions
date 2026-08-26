class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l = 0;
        int n = s.length();
        int ones = 0;
        vector<string> st;
        for(int r = 0; r < n; r++){
            if(s[r] == '1') ones++;
            while(ones >= k){
                st.push_back(s.substr(l, r - l + 1));
                if(s[l] == '1') ones--;
                l++;
            }
        } 
        if(st.empty()) return "";
        sort(st.begin(), st.end(), [](string &a, string &b) {
            if(a.length() != b.length())
                return a.length() < b.length();
            return a < b;
        });
        return st[0];
    }
};