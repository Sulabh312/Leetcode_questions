class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26, -1);
        for(int i = 0 ; i < s.length(); i++){
            if(v[s[i] - 'a'] == -1) v[s[i] - 'a'] = i;
            else v[s[i] - 'a'] = -2;
        }
        for(int i = 0; i < s.length(); i++){
            if(v[s[i] - 'a'] == i) return i;
        }
        return -1;
    }
};