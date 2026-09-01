class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i < n - 3; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j < n - 2; j++){
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                long find = target - nums[i] - nums[j];
                int k = j+1, l = n-1;
                while(k < l){
                    if(k > j+1 && nums[k] == nums[k-1]) k++;
                    else if(nums[k] + nums[l] == find) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                    else if(nums[k] + nums[l] < find) k++;
                    else l--;
                }
            }

        }
        return ans;
    }
};