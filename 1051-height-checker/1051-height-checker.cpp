class Solution {
public:
    int heightChecker(vector<int>& hts) {
        int n = hts.size();
        vector<int> ex = hts;
        sort(ex.begin(), ex.end());
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(ex[i] != hts[i]) ans++;
        }
        return ans;
    }
};