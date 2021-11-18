class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && st.back().first==s[i]){
                st.back().second++;
            }
            else st.push_back({s[i],1});
            if(st.back().second==k) st.pop_back();
        }
        string ans;
        for(auto i:st){
            ans.append(i.second,i.first);
        }
        return ans;
    }
};
