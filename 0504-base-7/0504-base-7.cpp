class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        bool negative = num < 0;
        long long n = num;

        if(negative) n = -n;
        string s = "";
        while(n>0){
            int k=n%7;
            s+=to_string(k);
            n=n/7;

        }
        reverse(s.begin(),s.end());
        if(negative) s = "-" + s;
        return s;
    }
};