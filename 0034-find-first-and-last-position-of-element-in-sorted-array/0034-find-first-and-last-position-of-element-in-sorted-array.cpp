class Solution {
public:
    int firstPosition(vector<int> &nums, int l, int r, int target){
        int ans = -1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target) {
                ans = mid;
                r = mid-1;
            }
            else if(nums[mid] > target) r = mid-1; 
            else l = mid + 1; 
        }
        return ans;
    }
    int lastPosition(vector<int> &nums, int l, int r, int target){
        int ans = -1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target) {
                ans = mid;
                l = mid+1;
            }
            else if(nums[mid] > target) r = mid-1; 
            else l = mid + 1; 
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int t) {
        int n = nums.size() - 1;
        return {firstPosition(nums, 0, n, t), lastPosition(nums, 0, n, t)};
    }
};