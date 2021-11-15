public:
    string removeOuterParentheses(string s) {
        // stack<int>st;
        string ans="";
        int opened=0;
        for(int i=0;i<s.length();i++){
            // if(s[i]=='(') st.push(i);
            // else{
            //     int end=st.top();
            //     st.pop();
            //     if(st.empty()){
            //         if(i-end+1>0) ans+=s.substr(end+1,i-end-1);
            //     }
            // }
            if(s[i]=='('){
                if(opened>0) ans+=s[i];
                opened++;
            }          
                          
            else if(s[i]==')'){
                if(opened>1) ans+=s[i];
                opened--;
            }
        }
        return ans;
    }
};
