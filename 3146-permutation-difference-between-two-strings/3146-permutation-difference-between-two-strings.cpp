class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.length();
        vector<int> m1(26, -1), m2(26, -1);
        for(int i = 0; i < n; i++){
            m1[s[i] - 'a'] = i;
            m2[t[i] - 'a'] = i;
        }
        int ans = 0;
        for(int i = 0; i < 26; i++)
            ans += abs(m1[i] - m2[i]);
        return ans;
    }
};