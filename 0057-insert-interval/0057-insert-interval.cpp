class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // intervals.push_back(newInterval);
        // vector<vector<int>> ans;
        // sort(intervals.begin(), intervals.end());
        // int minVal = intervals[0][0];
        // int maxVal = intervals[0][1];
        // int n = intervals.size();
        // for(int i = 0; i < n; i++){
        //     if(intervals[i][0] > maxVal){
        //         ans.push_back({minVal, maxVal});
        //         minVal = intervals[i][0];
        //         maxVal = intervals[i][1];
        //     }
        //     else maxVal = max(maxVal, intervals[i][1]);
        // }
        // ans.push_back({minVal, maxVal});
        // return ans;
        int n = intervals.size();
        int i = 0;
        vector<vector<int>> ans;
        while(i < n && newInterval[0] > intervals[i][1]){
            ans.push_back(intervals[i]);
            i++;
        }
        while(i < n && newInterval[1]>= intervals[i][0]){
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        ans.push_back(newInterval);
        while(i < n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};