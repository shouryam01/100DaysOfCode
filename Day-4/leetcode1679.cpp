// Max Number of K-Sum Pairs

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        sort(nums.begin(), nums.end());
        for(auto x: nums){
            mp[x]++;
        }
        int count=0;
        int low=0, high = nums.size()-1;
        
        while(low<high){
            if(nums[low]+nums[high] == k){
                count++;
                low++, high--;
            }
            
            else if(nums[low]+nums[high]>k)
                high--;
            else
                low++;
            
        }
        
        return count;
        
    }
};