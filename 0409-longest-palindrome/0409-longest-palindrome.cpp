class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        map<char, int> mp;
        for(char c : s) mp[c]++;
        int odd = 0, count = 0;
        bool flag = false;
        for(auto it : mp){
            if(it.second % 2 == 1){
                count += it.second - 1;
                odd = true;
            }
            else count += it.second;
        }
        return odd == true ? count + 1 : count;
    }
};