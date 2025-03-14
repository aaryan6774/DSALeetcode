class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int n = nums.size();
        set<vector<int>> s; // To store unique subarrays
        for(int i = 0; i < n; i++) {
            vector<int> temp;
            int cnt = 0; // Reset for each starting index
            for(int j = i; j < n; j++) {
                temp.push_back(nums[j]);
                if(nums[j] % p == 0) {
                    cnt++;
                }
                if(cnt > k) {
                    break; // Stop as condition exceeded
                }
                s.insert(temp); // Store unique subarray
            }
        }
        return s.size();
    }
};
