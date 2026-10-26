class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
            if(s[i] >= 'a' && s[i] <= 'z' ||
               (s[i] >= '0' && s[i] <= '9')){
                ans.push_back(s[i]);
            }
        }
        string r=ans;
        reverse(ans.begin(),ans.end());
        if(ans==r){
            return true;
        }
        else{
            return false;
        }
    }
};