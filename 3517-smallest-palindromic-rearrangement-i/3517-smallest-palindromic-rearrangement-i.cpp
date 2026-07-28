class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char, int> freq;
        for(char c: s) freq[c]++;
        string left = "";
        char mid = 0;
        for(char c = 'a'; c <= 'z'; c++){
            if(freq[c]%2) mid = c;
            left.append(freq[c]/2, c);
        }
        string right = left;
        reverse(right.begin(), right.end());
        if(mid) left += mid;
        return left+right;
    }
};