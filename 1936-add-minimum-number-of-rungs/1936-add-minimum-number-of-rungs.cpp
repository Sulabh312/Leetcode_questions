class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int cur = 0;
        int count = 0;
        for(int r : rungs){
            int gap = r - cur;
            count += (gap - 1)/dist;
            cur = r;
        }
        return count;
    }
};