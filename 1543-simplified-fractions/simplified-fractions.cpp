class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        for (int i = 1; i < n; i++) {  // Fixed misplaced parenthesis
            for (int j = i + 1; j <= n; j++) {
                if (gcd(i, j) == 1) {
                    ans.push_back(to_string(i) + '/' + to_string(j));
                }
            }
        }
        return ans;
    }
};
