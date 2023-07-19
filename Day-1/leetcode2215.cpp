// 2215. Find the Difference of Two Arrays

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end()); 
        
        vector<int> dist_nums1, dist_nums2;
        
        for(int num: s1){
            if(s2.count(num) == 0){
                dist_nums1.push_back(num);
            }
        }
        
         for(int num: s2){
            if(s1.count(num) == 0){
                dist_nums2.push_back(num);
            }
        }
        
        return {dist_nums1, dist_nums2};
        
    }
};
