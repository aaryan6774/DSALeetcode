class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string , int> freq;
        for(const string& str : arr) {
            freq[str]++;
        }
        for(const string& str : arr ) {
            if(freq[str]==1 && --k==0) {
                return str;
            }
        }
        return "";
    }
};