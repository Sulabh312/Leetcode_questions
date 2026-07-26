class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int m1 = INT_MIN, m2 = INT_MIN, m3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;
        for(int i : nums){
            if(i > m1){
                m3 = m2;
                m2 = m1;
                m1 = i;
            }
            else if(i > m2){
                m3 = m2;
                m2 = i;
            }
            else if(i > m3) m3 = i;


            if(i < min1){
                min2 = min1;
                min1 = i;
            }
            else if(i < min2) min2 = i;
        }
        return max(m1 * m2 * m3, min1 * min2 * m1);
    }
};