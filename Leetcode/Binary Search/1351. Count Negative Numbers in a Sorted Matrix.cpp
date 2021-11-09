class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        //O(m*n) solution
        // for(int i=0;i<grid.size();i++){
        //     for(int j=0;j<grid[0].size();j++){
        //         if(grid[i][j]<0) count++;
        //     }
        // }
        //O(m+n) solution
        int m=grid.size(),n=grid[0].size(),c=n-1,r=0;
        while(r<m){
            if(c>=0 && grid[r][c]<0) c--;
            else{
                count+=n-c-1;
                r++;
            }
            
        }
        return count;
    }
};
