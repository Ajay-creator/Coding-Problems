class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++){
            if((nums.end()-lower_bound(nums.begin(),nums.end(),i))==i) return i;
        }
        return -1;
    }
};
