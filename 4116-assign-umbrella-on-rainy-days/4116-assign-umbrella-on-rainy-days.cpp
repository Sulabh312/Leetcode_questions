class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rn) {
        int a = 0, b = 0, n = rn.size();
        vector<string> ans;
        for(int i = 0; i < n - 1; i++){
            if(rn[i]){
                if(rn[i+1] == 0){
                    ans.push_back("Bob");
                    b++;
                }
                else{
                    if(a <= b) {
                        ans.push_back("Alice");
                        a++;
                    }
                    else {
                        ans.push_back("Bob");
                        b++;
                    }
                }
            }
            else ans.push_back("None");
        }
        ans.push_back(rn[n-1] == 1 ? "Bob" : "None");
        return ans;
    }
};