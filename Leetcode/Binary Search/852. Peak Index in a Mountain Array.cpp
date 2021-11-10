class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-1,mid,prev,next,n=arr.size(),ans;
        while(l<h){
            mid=l+(h-l)/2;
            // prev = (mid+n-1)%n;
            // next = (mid+1)%n;
            // if(arr[mid]>arr[prev] && arr[mid]>arr[next]){
            //     ans=mid;
            //     break;
            // }
            // else if(arr[mid]<arr[next]) l=mid+1;
            // else if(arr[mid]>arr[next]) h=mid-1;
            if(arr[mid]<arr[mid+1]) l=mid+1;
            else h=mid;
        }
        return l;
    }
};
