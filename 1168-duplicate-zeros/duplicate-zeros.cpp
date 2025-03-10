class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> a;
        int n = arr.size();
        for(int i=0;i<n;i++) {
            if(arr[i] == 0) {
                a.push_back(0);
                a.push_back(0);
            }
            else {
                a.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++) {
            arr[i] = a[i]; 
        }
    }
};