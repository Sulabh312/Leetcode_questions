class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // vector<int> nums1;
        // for(int i : nums) if(i != 0 && i%k == 0) nums1.push_back(i);
        // sort(nums1.begin(), nums1.end());
        // int i = 0;
        set<int> st;
        for(int i : nums) if(i != 0 && i%k == 0) st.insert(i);
        vector<int> nums1;
        for(auto i : st) nums1.push_back(i);
        int i;
        for(i = 0; i < nums1.size(); i++){
            if(k*(i+1) != nums1[i])  break;
        }
        return k * (i+1);
    }
};