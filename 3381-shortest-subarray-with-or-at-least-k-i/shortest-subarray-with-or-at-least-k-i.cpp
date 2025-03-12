class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            int cur = nums[i];
            for(int j=i;j<n;j++) {
                cur = cur | nums[j];
                if(cur >= k) {
                    ans = min(ans, j-i+1);
                    break;
        // return ans;
                }
            }
        }
        return ans == INT_MAX ? -1 : ans; 
    }
};
// logical OR operator ( || ) 
//Bitwise | aise use krte