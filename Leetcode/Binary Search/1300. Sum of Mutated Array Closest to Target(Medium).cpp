class Solution {
public:
    
    int diff(vector<int>arr, int target, int value){
        long sum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>value) sum+=value;
            else sum+=arr[i];
        }
        return target-sum;
    }
    
    int findBestValue(vector<int>& arr, int target) {
        int l=1, h=*max_element(arr.begin(),arr.end()),mid,res;
        while(l<=h){
            mid= l+(h-l)/2;
            if(diff(arr,target,mid)==0){
                return mid;
            }
            else if(diff(arr,target,mid)>0) l=mid+1;
            else h=mid-1;
        }
        if(abs(diff(arr,target,l))<abs(diff(arr,target,h))) return l;
        else return h;
    }
};
