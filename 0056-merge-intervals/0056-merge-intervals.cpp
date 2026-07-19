class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int eleMn = intervals[0][0];
        int eleMx = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] > eleMx) {
                ans.push_back({eleMn, eleMx});
                eleMn = intervals[i][0];
                eleMx = intervals[i][1];
            } else {
                eleMx = max(eleMx, intervals[i][1]);
            }
        }

        ans.push_back({eleMn, eleMx});
        return ans;
    }
};