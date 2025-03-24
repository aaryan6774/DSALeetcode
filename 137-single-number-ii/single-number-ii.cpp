class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto z: nums) {
            m[z]++;
        }
        for(auto z: m){
            if(z.second == 1){
                return z.first;
            }
        }
        return -1;
    }
};