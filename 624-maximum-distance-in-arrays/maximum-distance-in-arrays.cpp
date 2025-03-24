class Solution {
public:
    int maxDistance(vector<vector<int>>& nums) {
        int s = nums[0][0];
        int b = nums[0].back();
        int max_dis = 0;
        int n = nums.size();
        for(int i = 1; i<n; i++)
        {
            max_dis = max(max_dis, abs(nums[i].back() - s));
            max_dis = max(max_dis, abs(abs(b - nums[i][0])));
            s = min(s, nums[i][0]);
            b = max(b, nums[i].back());
        }
            return max_dis;

    }
};