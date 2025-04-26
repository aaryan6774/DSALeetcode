// class Solution {
// public:
//     string makeSmallestPalindrome(string s) {
//         int n = s.length();
        
//     }
// };

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            int j = n - i - 1;
            if (s[i] != s[j]) {
                s[i] = s[j] = min(s[i], s[j]);
            }
        }
        return s;
    }
};