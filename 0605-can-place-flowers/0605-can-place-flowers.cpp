class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0 &&
               (i == 0 || nums[i - 1] == 0) &&
               (i == nums.size() - 1 || nums[i + 1] == 0)) {
                
                cnt++;
                nums[i] = 1;
            }
        }

        return cnt >= n;
    }
};