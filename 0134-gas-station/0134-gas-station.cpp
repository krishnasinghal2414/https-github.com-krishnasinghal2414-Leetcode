class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int n = gas.size();
        int start = 0, total = 0, remainingGas = 0;

        for(int i = 0; i < n; i++) {
            total += gas[i] - cost[i];
            remainingGas += gas[i] - cost[i];
            if(remainingGas < 0) {
                start = i + 1;
                remainingGas = 0;
            }
        }

        return total >= 0 ? start : -1;
    }
};