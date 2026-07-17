class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return nums;
        for(int i = 0; i < n; i++) if(nums[i] % 2 == 0) nums[i] *= -1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) if(nums[i] < 0) nums[i] *= -1;
    
        return nums;
    }
};