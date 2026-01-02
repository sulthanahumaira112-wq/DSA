class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<int>res;
        int n=nums.size();
        int more=n/3;
        for(auto x:freq){
            if(x.second>more){
                res.push_back(x.first);
            }
        }return res;
    }
};