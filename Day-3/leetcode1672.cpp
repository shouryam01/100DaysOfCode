// 1672. Richest Customer Wealth


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int j = accounts.size();
        int maximum=0;
        for(int i=0; i<j; i++){
            int sum = 0;
            for(int x=0; x<accounts[i].size(); x++){
                sum += accounts[i][x];
            }
            if(sum>maximum)
                maximum = sum;
        }
        
        return maximum;
    }
};