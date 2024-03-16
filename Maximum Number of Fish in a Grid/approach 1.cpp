class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j, int res){
        if(i>=0 && j>=0 && i<grid.size() && j<grid[0].size()){
            if(grid[i][j]>0){
                res = res + grid[i][j];
                grid[i][j] = 0;
                res = dfs(grid, i+1, j, res);
                res = dfs(grid, i-1, j, res);
                res = dfs(grid, i, j+1, res);
                res = dfs(grid, i, j-1, res);
            }
        }
        return res;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        vector<vector<int>> vis; 
        for(int i=0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j]>0){
                    int res = dfs(grid, i, j, 0);
                    ans = max(res,ans);
                }
            }
        }
        return ans;
    }
};