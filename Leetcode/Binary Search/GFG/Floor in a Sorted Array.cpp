int findFloor(long long int arr[], int N, long long int K) {
    
    //Your code here
    int l=0,h=N-1,mid,res=-1;
    while(l<=h){
        mid = l+(h-l)/2;
        if(arr[mid]==K) return mid;
        else if(arr[mid]<K){
            res = mid;
            l=mid+1;
        }
        else if(arr[mid]>K) h=mid-1;
    }
    return res;
}
