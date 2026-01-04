class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int cur=INT_MAX;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]<cur){
                cur=nums[i];
            }
        }return cur;
    }
};