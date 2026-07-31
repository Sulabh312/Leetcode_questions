class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        map<char, int> mp;
        for(char c : word) mp[c]++;
        // if(mp.size() < 9) return n;
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        int ans = 0;
        for(int i = 0; i < vec.size(); i++){
            ans += vec[i].second *  (i/8+1) ;
            // cout << vec[i].first << ':' << vec[i].second << ':' << i/8  << ':' << ans<< endl;
        }
        return ans;
    }
};