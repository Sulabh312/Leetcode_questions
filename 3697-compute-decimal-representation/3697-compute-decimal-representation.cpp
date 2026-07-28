class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int i = 0;
        while(n){
            if(n%10) ans.push_back(n%10 * pow(10, i));
            n /= 10;
            i++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};