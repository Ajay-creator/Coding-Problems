class Comp{
public:
    bool operator()(string &a, string &b){
        if(a.length()!=b.length()) return a.size()>b.size();
        return a>b;
    }
};

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        //Time: O(NlogK* M) Space:O(K)
        // priority_queue<string,vector<string>,Comp>minHeap;
        // for(int i=0;i<nums.size();i++){
        //     minHeap.push(nums[i]);
        //     if(minHeap.size()>k) minHeap.pop();
        // }
        // return minHeap.top();
        
        //using nth_element time: O(N*M) where N=nums.size() and M=nums[i].length()<=100 Space: O(N)
        nth_element(nums.begin(),nums.begin()+k-1,nums.end(),Comp());
        return nums[k-1];
    }
};
