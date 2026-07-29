class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());

        int m = queries.size();
        vector<pair<int, int>> q;

        for (int i = 0; i < m; i++) {
            q.push_back({queries[i], i});
        }

        sort(q.begin(), q.end());

        vector<int> ans(m);
        int j = 0;
        int best = 0;

        for (auto &[price, idx] : q) {
            while (j < items.size() && items[j][0] <= price) {
                best = max(best, items[j][1]);
                j++;
            }
            ans[idx] = best;
        }

        return ans;
    }
};