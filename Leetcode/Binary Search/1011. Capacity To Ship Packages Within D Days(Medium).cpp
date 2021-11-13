class Solution {
public:
    
    bool isValid(vector<int>weights,int days,int maxCapacity){
        long capacity=0,time=1;
        for(int i=0;i<weights.size();i++){
            capacity+=weights[i];
            if(capacity>maxCapacity){
                time++;
                capacity = weights[i];
            }
            if(time>days) return false;
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        if(weights.size()==1) return weights[0];
        if(days==1) return accumulate(weights.begin(),weights.end(),0);
        
        int l=*max_element(weights.begin(),weights.end()),h=accumulate(weights.begin(),weights.end(),0),mid,res;
        while(l<=h){
            mid= l+(h-l)/2;
            if(isValid(weights,days,mid)){
                res = mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return res;
    }
};
