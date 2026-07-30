class Solution {
public:
    int hIndex(vector<int>& ci) {
        sort(ci.begin(), ci.end(), greater<int>());
        int n = ci.size();
        int ans = 0;
        for(int i = 0; i < n; i++) if(ci[i] >= i+1) ans++;
        return ans;
    }
};