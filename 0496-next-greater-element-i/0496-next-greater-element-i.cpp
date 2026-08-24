class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n = nums2.size();
        vector<int> ans;
        for(int num : nums1){
            int i = 0;
            for(; i < n; i++){
                if(nums2[i] == num) break;
            }
            bool flag = false;
            for(; i < n; i++){
                if(nums2[i] > num) {
                    flag = true;
                    break;
                }
            }
            if(flag) ans.push_back(nums2[i]);
            else ans.push_back(-1);
        }
        return ans;
    }
};