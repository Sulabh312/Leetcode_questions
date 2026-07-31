class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int na = a.length();
        int nb = b.length();

        int i = 0, j = 0;
        int carry = 0;
        string ans = "";

        while (i < na && j < nb) {
            int curr = (a[i] - '0') + (b[j] - '0') + carry;
            ans += (curr % 2) + '0';
            carry = curr / 2;
            i++;
            j++;
        }

        while (i < na) {
            int curr = (a[i] - '0') + carry;
            ans += (curr % 2) + '0';
            carry = curr / 2;
            i++;
        }

        while (j < nb) {
            int curr = (b[j] - '0') + carry;
            ans += (curr % 2) + '0';
            carry = curr / 2;
            j++;
        }

        if (carry)
            ans += '1';

        reverse(ans.begin(), ans.end());
        return ans;
    }
};