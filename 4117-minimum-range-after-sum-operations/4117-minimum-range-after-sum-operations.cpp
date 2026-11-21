class Solution {
public:
    int minRange(int a, int b, int c) {
        vector<int> tm = {a, b, c};
        sort(tm.begin(), tm.end());
        tm[2] = min(tm[2], (tm[0] + tm[1]));
        return tm[2] - tm[0];
    }
};