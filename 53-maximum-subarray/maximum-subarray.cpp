class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int cur=0;
     int maxi=INT_MIN;

     for(int x:nums){
        cur=max(x+cur,x);
        maxi=max(cur,maxi);
     }return maxi;   
    }
};