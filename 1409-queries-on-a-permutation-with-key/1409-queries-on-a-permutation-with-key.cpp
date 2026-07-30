class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> p(m);
        for(int i = 1; i <= m ; i++) p[i-1] = i;
        vector<int> ans;
        for(int q : queries){
            int i = 0;
            for(; i < m; i++){
                if(p[i] == q){
                    ans.push_back(i);
                    break;
                }
            }
            for(i ; i > 0; i--) p[i] = p[i-1];
            p[0] = q; 
        }
        return ans;
    }
};