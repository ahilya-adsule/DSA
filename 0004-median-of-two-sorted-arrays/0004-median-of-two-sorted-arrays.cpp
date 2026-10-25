class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        int mid=n/2;
        if(n%2!=0){
            return nums1[mid];
        }
        else{
            return ((double)nums1[mid-1]+nums1[mid])/2.0;
        }
    }
};