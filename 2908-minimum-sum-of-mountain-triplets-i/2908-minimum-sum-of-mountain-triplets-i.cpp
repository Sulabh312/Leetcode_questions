class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftmin(n), rightmin(n);
        leftmin[0] = nums[0];
        rightmin[n-1] = nums[n-1];
        for(int i = 1; i < n; i++){
            leftmin[i] = min(nums[i], leftmin[i-1]);
            rightmin[n-1-i] = min(rightmin[n-i], nums[n-1-i]);
        }
        int ans = INT_MAX;
        for(int i = 1; i < n-1; i++){
            if(leftmin[i] < nums[i] and rightmin[i] < nums[i]) {
                ans = min(ans, leftmin[i]+rightmin[i]+nums[i]);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};