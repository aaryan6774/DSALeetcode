class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minsum = INT_MAX;
        bool found = false;
        for(int i=0;i<n;i++) {
            int sum = 0;
            for(int j=i;j<n;j++) {
                sum +=nums[j];
                int len = j-i+1;
                if(len >=l && len <=r && sum > 0) {
                    minsum = min(minsum , sum);
                    found = true;
                }
            }
        }
        return found ? minsum : -1; //If no such subarray exists, return -1.
    }
};
// 3 -2 1 4  subarray whose size is between l and r