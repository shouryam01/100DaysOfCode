// 3Sum Problem :)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        set<vector<int>> s;
        vector<vector<int>> res;
        
        for(int i=0; i<nums.size(); i++){
            int j = i+1;
            int k = nums.size() - 1;
            
            while(j<k){
                int sums = nums[i] + nums[j] + nums[k];
                if(sums == 0){
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                
                else if(sums<0){
                    j++;
                }
                
                else
                    k--;
            }
        }
        
        for(auto x: s){
            res.push_back(x);
        }
        
            return res;
    }
};