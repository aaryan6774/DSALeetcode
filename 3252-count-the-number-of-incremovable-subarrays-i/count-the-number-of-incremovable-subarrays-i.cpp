class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int subcount = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int lastElement = -1;
                bool isIncreasing = true;
                
                for(int k = 0; k < n; k++) {
                    if(k >= i && k <= j) continue; // Skip the removed subarray
                    
                    if(lastElement >= nums[k]) {
                        isIncreasing = false;
                        break;
                    }
                    lastElement = nums[k];
                }
                
                if(isIncreasing) subcount++;
            }
        }
        
        return subcount;
    }
};
