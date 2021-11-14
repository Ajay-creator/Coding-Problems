vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int>s;
       vector<int>ans;
       //vector<pair<int,int>>ans;
       for(int i=0;i<n;i++){
            if(s.empty()) ans.push_back(-1);
            else{
                while(!s.empty() && price[i]>=price[s.top()]){
                    s.pop();
                }
                if(s.empty()) ans.push_back(-1);
                else ans.push_back(s.top());
            }
            s.push(i);
       }
       for(int i=0;i<n;i++){
           ans[i] = i-ans[i];
       }
       return ans;
    }
