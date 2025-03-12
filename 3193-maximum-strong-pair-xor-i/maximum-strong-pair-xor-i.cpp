class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int x = 0; x<n; x++)
        {
            for(int y = x; y<n; y++)
            {
                int i = nums[x];
                int j = nums[y];
                if(abs(i-j) <= min(i,j))
                {
                    ans = max(ans, i ^ j);  
                }
            }
        }

        return ans;
    }
};