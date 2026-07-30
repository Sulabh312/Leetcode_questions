class Solution {
public:
    int minMovesToSeat(vector<int>& st, vector<int>& stu) {
        int n = st.size();
        sort(st.begin(), st.end());
        sort(stu.begin(), stu.end());
        int ans = 0;
        for(int i = 0; i < n; i++) ans += abs(stu[i] - st[i]);
        return ans;
    }
};