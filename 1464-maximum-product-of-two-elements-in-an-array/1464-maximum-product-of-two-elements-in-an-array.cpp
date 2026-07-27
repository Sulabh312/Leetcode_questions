class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1 = INT_MIN;
        int m2 = INT_MIN;
        for(int i : nums){
            if(i > m1){
                m2 = m1;
                m1 = i;
            }
            else if(i > m2) m2 = i;
        }
        return (m1-1) * (m2-1);
    }
};