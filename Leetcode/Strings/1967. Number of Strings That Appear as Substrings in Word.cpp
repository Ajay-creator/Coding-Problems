class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++){
            string t = patterns[i];
            int flag=0;
            if(t.length()<=word.length()){
                for(int j=0;j<=word.length()-t.length();j++){
                if(word.substr(j,t.length())==t){
                    flag=1;
                }
            }
            if(flag==1) count++;
            }   
        }
        return count;
    }
};
