class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return n;
        int idxMin = 0;
        int idxMax = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > nums[idxMax]) idxMax = i;
            if(nums[i] < nums[idxMin]) idxMin = i;
        }
        int front = max(idxMin, idxMax) + 1;
        int back = n - min(idxMin, idxMax);
        int both = min(idxMin + 1 + n - idxMax, idxMax + 1 + n - idxMin);
        return min({front, back, both});
    }
};