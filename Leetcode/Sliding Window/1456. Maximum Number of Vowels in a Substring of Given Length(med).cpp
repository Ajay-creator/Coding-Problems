class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0,ans=0;
        bool arr[26] = {false};
        arr[0]=arr[4]=arr[8]=arr[14]=arr[20]=true;
        for(int i=0;i<s.length();i++){
            if(arr[s[i]-'a']) count++;
            if(i>=k && arr[s[i-k]-'a']) count--;
            ans = max(count,ans);
        }
        return ans;
    }
};
