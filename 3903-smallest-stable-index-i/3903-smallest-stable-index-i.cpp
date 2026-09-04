class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0; i < n; i++){
            auto mx = max_element(nums.begin(), nums.begin()+i+1);
            auto mn = min_element(nums.begin()+i, nums.end());
            int temp = *mx - *mn;
            if(temp <= k) ans = ans < i ? ans : i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};