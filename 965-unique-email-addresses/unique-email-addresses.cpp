class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
        for(string s:emails){
            string clean;
            for(char c:s){
                if(c=='+' || c== '@' )break;
                if(c=='.')continue;
                clean+=c;
            }
            clean+=s.substr(s.find('@'));
            st.insert(clean);
        }return st.size();
    }
};