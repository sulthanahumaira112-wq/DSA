class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cur=0,maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cur++;
                maxi=max(maxi,cur);

            }else{
                cur=0;
            }
        }return maxi;
    }
};