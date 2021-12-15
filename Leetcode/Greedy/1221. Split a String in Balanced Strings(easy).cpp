class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,letter=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R') letter++;
            else letter--;
            if(letter==0) count++;
        }
        return count;
    }
};
