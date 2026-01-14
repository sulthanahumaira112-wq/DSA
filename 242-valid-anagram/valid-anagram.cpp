class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        unordered_map<char,int>freq1;
        for(char x:s){
            freq[x]++;
        }for(char x:t){
            freq1[x]++;
        }
        return freq==freq1;
    }
};