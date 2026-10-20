class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int Ssum=0;
        int Dsum=0;
        int Esum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<10){
                Ssum+=nums[i];
            }
            else if(nums[i]>9 && nums[i]<100){
                Dsum+=nums[i];
            }
            else{
                Esum+=nums[i];
            }
        }
        if(Ssum>Dsum+Esum){
            return true;
        }
        else if(Dsum>Ssum+Esum){
            return true;
        }
        else{
            return false;
        }
    }
};