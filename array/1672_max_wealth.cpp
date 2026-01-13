// LeetCode 1672 - Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int wealth;
        for (int i=0; i<accounts.size(); i++){
            wealth = 0;
            for(int j=0; j<accounts[i].size(); j++){
                wealth = wealth + accounts[i][j];
            }
            if (wealth > maxWealth){
                maxWealth = wealth;
            }
        }
        return maxWealth;
    }
};