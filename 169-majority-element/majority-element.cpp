class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int middle=n/2;
        unordered_map<int,int>freq;
        for(int num:nums){
            
                freq[num]++;
            }
        for(auto it: freq){
            if(it.second>middle){
                return it.first;
            }
        }return -1;
    }
};
