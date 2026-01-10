class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        int ans = 1;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                continue;               // skip duplicates
            }
            else if (nums[i] + 1 == nums[i + 1]) {
                count++;                // consecutive
            }
            else {
                count = 1;              // reset
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
