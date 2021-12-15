class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                int diff = nums[i-1]-nums[i];
                res+= diff+1;
                nums[i]+=diff+1;
            }
        }
        return res;
    }
};
