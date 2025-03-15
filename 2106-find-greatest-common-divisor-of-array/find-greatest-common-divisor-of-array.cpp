class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = INT_MAX, l = INT_MIN; // Correct initialization
        int maxi = -1;
        vector<int> v;
        
        for(int i = 0; i < nums.size(); i++) {
            s = min(s, nums[i]); // Find min element
            l = max(l, nums[i]); // Find max element
        }
        
        for(int i = 1; i <= s; i++) { // Loop should run till 's' not 'l'
            if(s % i == 0 && l % i == 0) {
                v.push_back(i); 
            }
        }

        maxi = v.back(); // Get the largest divisor

        return maxi;
    }
};
