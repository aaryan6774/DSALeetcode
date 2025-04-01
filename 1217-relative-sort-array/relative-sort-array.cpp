/*
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map <int ,int> cm;
        vector <int> rem , result;
        for(int i =0;i<arr2.size();i++) {
            cm[arr2[i]] = 0;
        }
        for(int i=0;i<arr1.size();i++) {
            if(cm.find(arr1[i]) != cm.end()) {
                cm[arr1[i]]++;
            } else{
                rem.push_back(arr1[i]);
            }
        }
        sort(rem.begin(),rem.end());
        for(int i=0;i<arr2.size();i++) {
            for(int j=0;j<cm[arr2[i]];j++) {
                result.push_back(arr2[i]);
            }
        }
        for(int i=0;i<rem.size();i++) {
            result.push_back(rem[i]);
        }
        return result;
    }
};
*/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
     
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {   
                if (arr1[j] == arr2[i]) {
                    result.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }
        sort(arr1.begin(), arr1.end());

        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] != -1) {
                result.push_back(arr1[i]);
            }
        }
        return result;
    }
};
