class Solution {
public:
    int mySqrt(int x) {
        long long left=1;
        long long right=x;
        int ans=0;
        if (x < 2) return x;
        while(left<=right){
            long long mid=left+(right-left)/2;

            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
        
    }
};