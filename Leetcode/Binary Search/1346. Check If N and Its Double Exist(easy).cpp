class Solution {
public:
    
    bool binarySearch(vector<int>arr,int i,int target){
        int l=0,h=arr.size()-1,mid;
        while(l<=h){
            mid = l+(h-l)/2;
            if(mid!=i && arr[mid]==target) return true;
            else if(arr[mid]<target) l=mid+1;
            else h=mid-1;
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0 && binarySearch(arr,i,arr[i]/2)) return true;
            else if(binarySearch(arr,i,arr[i]*2)) return true;
        }
        return false;
    }
};
