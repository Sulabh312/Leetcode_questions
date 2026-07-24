class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        int max = *max_element(nums.begin(), nums.end());
        int u = 1 << bit_width(size_t(max));
        vector<bool> s(u, false);
        for(int i = 0; i < n; i++){
            for(int j = i ; j < n; j++){
                s[nums[i]^nums[j]]= 1;
            }
        }
        vector<bool> t(u, 0);
        for(int i = 0; i < u; i++){
            if(s[i]) 
                for(auto x : nums)
                    t[x^ i] = 1;
        }
        int ans = 0;
        for(int i = 0; i < u ; i++) if(t[i]) ans++;
        return ans;
    }
};