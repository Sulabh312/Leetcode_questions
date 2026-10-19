class Solution {
public:
    bool canConstruct(string rn, string mg) {
        unordered_map<char, int> mp1, mp2;
        for(char c : rn) mp1[c]++;
        for(char c : mg) mp2[c]++;
        for(auto it : mp1){
            if((mp2.find(it.first) == mp2.end()) or mp2[it.first] < it.second) return false;
        }
        return true;
    }
};