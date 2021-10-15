class Solution {
public:
    bool halvesAreAlike(string s) {
        string vowel1 = "aeiou";
        string vowel2 = "AEIOU";
        int count1=0,count2=0,n=s.length()-1;
        for(int i=0;i<s.length()/2;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                count1++;
            }
            if(s[n-i]=='a' || s[n-i]=='e' || s[n-i]=='i' || s[n-i]=='o' || s[n-i]=='u' || s[n-i]=='A' || s[n-i]=='E' || s[n-i]=='I' || s[n-i]=='O' || s[n-i]=='U'){
                count2++;
            }
        }
        if(count1==count2) return true;
        else return false;
    }
};
