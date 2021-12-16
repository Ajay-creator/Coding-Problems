class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int h=s.length(),l=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='D'){
                ans.push_back(h--);
                if(i==s.length()-1) ans.push_back(h);
            }
            else{
                ans.push_back(l++);
                if(i==s.length()-1) ans.push_back(l);
            }
        }
        return ans;
    }
};
