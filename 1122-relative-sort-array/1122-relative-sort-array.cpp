class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001, 0);
        for(int i : arr1) freq[i]++;
        vector<int> ans;
        for(int i : arr2){
            while(freq[i]--) ans.push_back(i);
        }
        for(int i = 0 ; i < 1001; i++){
            while(freq[i] > 0) {
                ans.push_back(i);
                freq[i]--;
            }
        }
        return ans;
    }
};