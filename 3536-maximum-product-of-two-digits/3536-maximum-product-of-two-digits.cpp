class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int l = 0, sl = 0;
        for(int i = 0; i < s.length(); i++){
            int temp = s[i] - '0';
            // cout << temp << '\t' << ;
            if(temp >= l){
                sl = l;
                l = temp;
            }
            else if(temp > sl && temp < l) sl = temp;
        }
        return sl * l;
    }
};