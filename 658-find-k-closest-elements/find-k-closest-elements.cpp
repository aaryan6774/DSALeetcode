/*
#include<bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int> nums, int k, int x) {
    sort(nums.begin(), nums.end(), [x](int a, int b) {
        if (abs(a - x) == abs(b - x)) {
            return a < b;
        }
        return abs(a - x) < abs(b - x);
    });
    vector<int> ans(nums.begin(), nums.begin() + k);
    sort(ans.begin(), ans.end());
    return ans;
}
*/
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, r = arr.size() - 1;
        while (r - l >= k) abs(arr[l] - x) > abs(arr[r] - x) ? ++l : --r;
        return vector<int>(arr.begin() + l, arr.begin() + r + 1);
    }
};