class Solution {
public:
    int minimumMoves(string s) {
        int i = 0, n = s.length(), count = 0;
        while (i < n) {
            if (s[i] == 'X') {  // If we find 'X', increment count and move by 3 steps
                count++;
                i += 3;
            } else {  // If we find '0', move the pointer one step
                i++;
            }
        }
        return count;
    }
};
