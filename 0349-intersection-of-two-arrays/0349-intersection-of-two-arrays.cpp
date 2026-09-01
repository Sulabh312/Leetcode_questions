class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1;
        for(int i : nums1) st1.insert(i);
        vector<int> v;
        for(int i : nums2) 
            if(st1.find(i) != st1.end() && find(v.begin(), v.end(), i) == v.end()) 
                v.push_back(i);
        return v;
    }
};