class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        // first int to string then add then add to ans
        long long ans=0;
        int l =0;
        int r = nums.size() - 1;
        while(l<r) {
            string s1 = to_string(nums[l]);
            string s2 = to_string(nums[r]);
            string stri = s1 + s2;
            long long j = stoi(stri); //string to int
            ans+=j;
            l++;
            r--;
        }
        if(l == r) {
            ans+=nums[r];
        }
        return ans;
        
    }
};