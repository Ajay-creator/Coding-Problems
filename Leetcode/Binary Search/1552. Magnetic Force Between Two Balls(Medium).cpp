class Solution {
public:
    
    bool isValid(vector<int>pos,int force,int m){
        int balls=1, f=pos[0];
        for(int i=1;i<pos.size();i++){
            if(pos[i]-f >= force){
                balls++;
                f=pos[i];
            }
        }
        if(balls<m) return false;
        else return true;
    }
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=1,h=position[position.size()-1]-position[0],mid,res;
        while(l<=h){
            mid=l+(h-l)/2;
            if(isValid(position,mid,m)){
                res=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return res;
    }
};
