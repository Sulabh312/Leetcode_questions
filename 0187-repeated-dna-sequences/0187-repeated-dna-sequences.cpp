class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mp;
        int n = s.length();
        vector<string> ans;
        for(int i = 0; i <= n - 10; i++){
            string temp = "";
            for(int j = i; j < i+10; j++)
                temp += s[j];
            mp[temp]++;
            if(mp[temp] == 2) ans.push_back(temp);
        } 
        return ans;
    }
};