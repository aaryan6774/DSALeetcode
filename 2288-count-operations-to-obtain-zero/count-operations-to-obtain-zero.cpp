class Solution {
public:
    int countOperations(int n1, int n2) {
        int cnt = 0;
        while (n1 != 0 && n2 != 0) { // Fix: Use && instead of ||
            if (n1 >= n2) {
                n1 = n1 - n2;
            } else {
                n2 = n2 - n1;
            }
            cnt++;
        }
        return cnt;
    }
};