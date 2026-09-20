class Solution {
public:
    int reverseDegree(string s) {
        int i = 1;
        long long sum = 0;
        for(char c : s)
            sum += (('z' - c + 1) * i++);
        return sum;
    }
};