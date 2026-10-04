class Solution {
public:
    bool check(int mid, vector<int>& weights, int days){
        int n = weights.size();
        int m = mid;
        int count = 1;

        for(int i = 0; i < n; i++){
            if(m >= weights[i]){
                m -= weights[i];
            }
            else{
                count++;
                m = mid - weights[i];
            }
        }

        return count <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int low = 0;
        int high = 0;

        for(int i = 0; i < n; i++){
            low = max(low, weights[i]);
            high += weights[i];
        }

        int ans = high;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(check(mid, weights, days)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};