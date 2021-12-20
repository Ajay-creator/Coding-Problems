class Solution {
public:
    int minTimeToType(string word) {
        int ans=0;
        char prev='a';
        for(int i=0;i<word.length();i++){
            ans+=(min(abs(word[i]-prev),26-abs(word[i]-prev))+1);
            prev = word[i];
        }
        return ans;
    }
};
