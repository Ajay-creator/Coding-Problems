class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //NGR
        stack<int>st;
        map<int,int>ngr;
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.empty()) ngr[nums2[i]]=-1;
            else{
                while(!st.empty() && st.top()<=nums2[i]){
                    st.pop();
                }
                if(st.empty()) ngr[nums2[i]]=-1;
                else ngr[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(ngr[nums1[i]]);
        }
        return ans;
    }
};
