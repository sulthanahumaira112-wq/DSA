class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        vector<int>res;
        for(int num:nums){
            if(num>=0){
                pos.push_back(num);
            }else{
                neg.push_back(num);
            }
        }
        int i=0,j=0;
        while(res.size()<n){
            if(i<pos.size()){
                res.push_back(pos[i++]);
            }if(j<neg.size()){
                res.push_back(neg[j++]);
            }
        }return res;
    }
};