class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = 0, tc = 0;
        int start = 0, currGas = 0;
        for(int i=0;i<gas.size();i++) {
            tg += gas[i];
            tc += cost[i];
            currGas += (gas[i] - cost[i]);
            if(currGas<0) {
                start = i+1;
                currGas = 0;
            }
        }
        return tg < tc ? -1: start;
    }
};