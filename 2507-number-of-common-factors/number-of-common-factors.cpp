class Solution {
public:
    int commonFactors(int a, int b) {
        // vector<int> a1;
        
        int cnt =0;
        for(int i = 1; i<=a; i++)
        {
            if(a%i == 0 && b%i == 0)
            {
                cnt++;
            }
        }
        
        return cnt;
    }
};