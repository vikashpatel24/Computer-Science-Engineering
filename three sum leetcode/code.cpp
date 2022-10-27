class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        const size_t len = nums.size();
        if (len < 3)
            return {};
        
        std::sort(nums.begin(), nums.end());
        
        std::set<vector<int>> unique_results;
        
        for(int i = 0; i < len - 2; i++) {
            
            int j = i + 1;
            int k = len - 1;
            
            while (j < k) {
            
                const int sum = nums[i] + nums[j] + nums[k];
                if (0 == sum) {
                    unique_results.insert({nums[i], nums[j++], nums[k--]});
                }
                else if (0 > sum)
                    j++;
                else if (0 < sum)
                    k--;
            }
        }
        
        vector<vector<int>> results;
        
        std::copy(
            unique_results.begin(), unique_results.end(),
            std::back_inserter(results));
        
        return results;
    }
};
