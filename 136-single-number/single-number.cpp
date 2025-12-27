class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int num:nums)freq[num]++;

        for(auto &it : freq){
            if(it.second==1){
                return it.first;
            }
        }return -1;
    }
};