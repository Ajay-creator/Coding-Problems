class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,h=nums.size()-1,mid;
        if(nums.size()==1) return 0;
        while(l<=h){
            mid=l+(h-l)/2;
            if(mid>0 && mid<nums.size()-1){
                if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]){
                       return mid;
                }
                else if(nums[mid+1]>nums[mid]) l=mid+1;
                else h=mid-1;
            }
            else if(mid==0){
                if(nums[0]>nums[1]) return 0;
                else return 1;
            }
            else if(mid==nums.size()-1){
                if(nums[mid]>nums[mid-1]) return mid;
                else return mid-1;
            }
        }
        return -1;
    }
};
