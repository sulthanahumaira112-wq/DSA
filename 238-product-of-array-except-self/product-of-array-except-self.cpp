class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // 1️⃣ LEFT products
        int left = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = left;      // product from 0 to i-1
            left *= nums[i];
        }

        // 2️⃣ RIGHT products
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;   // product from i+1 to end
            right *= nums[i];
        }

        return ans;
    }
};
