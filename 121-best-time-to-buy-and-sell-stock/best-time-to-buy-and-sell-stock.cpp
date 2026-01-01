class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=0;
        for(int num:prices){
            if(num<mini){
                mini=num;
            }else if(num-mini>maxi){
                maxi=num-mini;
            }
        }return maxi;
    }
};