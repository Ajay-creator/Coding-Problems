class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans=0,j=0,f1=0;
        if(seats[0]==0){
            while(seats[j]==0) j++;
        }
        ans = j;
        for(int i=0;i<seats.size();i++){
            if(seats[i]==1){
                int diff = i-j-1;
                if(diff%2==0) ans = max(ans,diff/2);
                else ans = max(ans,(diff+1)/2);
                j=i;
            }
            if(i==seats.size()-1 && seats[i]==0) ans = max(ans,i-j);
        }
        return ans;
    }
};