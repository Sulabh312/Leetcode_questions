class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fL, vector<vector<int>>& sL) {
        vector<vector<int>> ans;
        int fN = fL.size(), sN = sL.size();
        if(fN == 0 || sN == 0) return {};
        for(int i = 0, j = 0; i < fN && j< sN; ){
            int start = max(fL[i][0], sL[j][0]);
            int end = min(fL[i][1], sL[j][1]);
            if(start <= end) ans.push_back({start, end});
            if(fL[i][1] < sL[j][1]){
                i++;
            }
            else j++;
        }
        return ans;
    }
};