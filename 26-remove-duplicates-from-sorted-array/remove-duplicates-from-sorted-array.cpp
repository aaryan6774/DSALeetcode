class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end()); 
        int index = 0;
        for (int num : s) {
            nums[index++] = num;
        }
        return index;
    }
};