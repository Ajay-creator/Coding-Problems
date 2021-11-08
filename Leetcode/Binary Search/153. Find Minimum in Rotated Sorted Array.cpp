class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1 || nums[0]<nums[nums.size()-1]) return nums[0];
        int l=0,h=nums.size()-1,n=nums.size(),mid,prev,next,ans;
        while(l<=h){
            mid = l+(h-l)/2;
            prev = (mid+n-1)%n;
            next = (mid+1)%n;
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]){
                ans=nums[mid];
                break;
            }
            else if(nums[0]<=nums[mid]) l=mid+1;
            else if(nums[mid]<=nums[n-1]) h=mid-1;
        }
        return ans;
    }
};
