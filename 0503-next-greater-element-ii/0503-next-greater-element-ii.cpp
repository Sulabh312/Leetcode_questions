class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, -1); 
        stack<int> st;
        for(int i = 2*n-1; i>=0 ; i--){
            if(i < n){
                while(!st.empty()){
                    if(st.top() > nums[i]) {
                        answer[i] = st.top();
                        break;
                    }
                    st.pop();
                }
            }
            st.push(nums[i%n]);
        }
        return answer;
    }
};