class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        if(nums.size()<=1) return 0;
        sort(nums.begin(),nums.end());
        set<double>unique;
        int st=0, end=nums.size()-1;
        while(st<end){
            double avg = (nums[st] + nums[end]) / 2.0;
            unique.insert(avg);
            st++;
            end--;
        }
        return unique.size();
    }
};