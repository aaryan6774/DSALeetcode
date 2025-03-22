class Solution {
public:
    long long GCD(long long x, long long y) {
        while (x > 0 && y > 0) {
            if (x > y) {
                x %= y;
            } else {
                y %= x;
            }
        }
        return x | y;  // Returns the non-zero value (gcd)
    }

    long long LCM(long long x, long long y) {
        return (x / GCD(x, y)) * y;  // Prevent overflow
    }

    long long maxScore(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;

        for (int i = -1; i < n; i++) {  // Iterate from -1 (removing no element) to n-1 (removing one element)
            long long lcm = 1;
            long long gcd = 0;

            for (int j = 0; j < n; j++) {  // Loop over all numbers
                if (j == i) {  // If j == i, skip this element (removes one element from the list)
                    continue;
                }
                lcm = LCM(lcm, nums[j]);  // Update LCM for remaining numbers
                gcd = GCD(gcd, nums[j]);  // Update GCD for remaining numbers
            }

            res = max(res, lcm * gcd);  // Update max score
        }
        return res;
    }
};
