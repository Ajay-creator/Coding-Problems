long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        //NSR
        stack<long long>s1;
        vector<long long>nsr;
        for(int i=n-1;i>=0;i--){
            if(s1.empty()){
                nsr.push_back(n);
            }
            else{
                while(!s1.empty() && arr[i]<=arr[s1.top()]){
                    s1.pop();
                }
                if(s1.empty()) nsr.push_back(n);
                else nsr.push_back(s1.top());
            }
            s1.push(i);
        }
        reverse(nsr.begin(),nsr.end());
        
        // NSL
        stack<long long>s2;
        vector<long long>nsl;
        for(int i=0;i<n;i++){
            if(s2.empty()){
                nsl.push_back(-1);
            }
            else{
                while(!s2.empty() && arr[i]<=arr[s2.top()]){
                    s2.pop();
                }
                if(s2.empty()) nsl.push_back(-1);
                else nsl.push_back(s2.top());
            }
            s2.push(i);
        }
        //evaluating area
        long long maxArea = INT_MIN;
        for(int i=0;i<n;i++){
            maxArea = max(maxArea,(nsr[i]-nsl[i]-1)*arr[i]);
        }
        return maxArea;
    }
