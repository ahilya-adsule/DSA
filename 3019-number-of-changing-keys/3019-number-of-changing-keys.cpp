class Solution {
public:
    int countKeyChanges(string s) {
        int count=-1;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])!=tolower(s[i+1])){
                count++;
            }
        }
        return count;
    }
};