class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                if(cnt>1)ans.push_back(s[i]);
            }
            if(s[i]==')'){
                if(cnt>1) ans.push_back(s[i]);
                cnt--;
            }
        }
        return ans;
    }
};