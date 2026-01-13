class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int i=0;
        string res="";
        string first=strs[0];
        string last=strs.back();
        while(i<first.size() && i<last.size()){
            if(first[i]==last[i]){
                res+=first[i];
                i++;
            }else{
                break;
            }
        }return res;
    }
};