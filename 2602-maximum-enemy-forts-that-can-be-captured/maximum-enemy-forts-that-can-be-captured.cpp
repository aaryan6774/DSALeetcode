class Solution {
public:
    int captureForts(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int cap = 0;
        int n = nums.size();
        int capDiff = 0;
        /*while(r < n)
        {
            if(nums[r] == -1 || nums[r] == 1)
            {
                capDiff = r - l - 1;
                Mcap = max(Mcap,capDiff );              
            r++;
            }
            return Mcap;
        }
        */
        for(int i=0;i<n;i++) {
            if(nums[i]==1) {
                left=nums[i];
                cap=0;
            }
            else {
                if(left == 1 && nums[i] == 0) {
                    cap++;
                }
                else {
                    capDiff = max(cap, capDiff);
                    left = 0 ;
                }
            }
        }
        cap = 0;
        for(int i=n-1;i>=0;i--) {
            if(nums[i]==1) {
                right=nums[i];
                cap=0;
            }
            else {
                if(right == 1 && nums[i] == 0) {
                    cap++;
                }
                else {
                    capDiff = max(cap, capDiff);
                    right = 0 ;
                }
            }
        }
        return capDiff;
    }
};