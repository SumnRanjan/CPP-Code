//442. Find All Duplicates in an Array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        long long int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<int> ans;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1])
                ans.push_back(nums[i]);
        }
        return ans;
    }
};
