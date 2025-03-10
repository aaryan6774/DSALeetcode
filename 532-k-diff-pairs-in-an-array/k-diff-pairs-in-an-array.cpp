class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        if (k < 0) return 0; // Since |x - y| can't be negative

        int cnt = 0;
        
        if (k == 0) { 
            // Count numbers that appear more than once
            for (int i = 0; i < n - 1; i++) {
                if (nums[i] == nums[i + 1]) {
                    cnt++;
                    while (i < n - 1 && nums[i] == nums[i + 1]) i++; // Skip duplicates
                }
            }
            return cnt;
        }

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for unique pairs
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicate elements
                if (abs(nums[j] - nums[i]) == k) {
                    cnt++;
                    break; // Stop further checking since pairs are unique
                }
            }
        }
        return cnt;
    }
};
