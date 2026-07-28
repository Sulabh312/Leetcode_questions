class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmp) {
        int n = tmp.size();
        if(n == 1) return {0};
        vector<int> next(n, 0);
        stack<int> st;
        for(int i = n - 1; i >= 0 ; i--){
            while(!st.empty()){
                if(tmp[st.top()] > tmp[i]) {
                    next[i] = st.top() - i;
                    break;
                }
                st.pop();
            }
            st.push(i);
        }
        return next;
    }
};