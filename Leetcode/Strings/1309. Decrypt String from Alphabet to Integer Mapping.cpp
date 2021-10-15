class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(i<s.length()-2 && s[i+2]=='#'){
                ans+=char(96+ stoi(s.substr(i,2)));
                i+=2;
            }else{
                ans+=char(96+stoi(s.substr(i,1)));
            }
        }
        return ans;
    }
};
