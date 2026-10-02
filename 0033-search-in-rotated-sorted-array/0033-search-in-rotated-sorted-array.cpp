class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        if (n == 1) {
            return nums[0] == target ? 0 : -1;
        }
        if(n==2){
            if(target==nums[0]) return 0;
            else if(target==nums[1]) return 1;
            else return -1;
        }
        int pivot=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(mid==0){
                l=mid+1;
            }
            else if(mid==n-1){
                h=mid-1;
            }
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                pivot=mid;
                break;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                pivot=mid+1;
                break;
            }
            else if(nums[mid]>nums[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        if(pivot==-1){
            l=0;
            h=n-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            return -1;
        }
        if(target>=nums[0] && target<=nums[pivot-1]){
            l=0;
            h=pivot-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }
        else{
            l=pivot;
            h=n-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]>target){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }
        return -1;
    }
};