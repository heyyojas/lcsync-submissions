// Equal Sum Grid Partition I
// Difficulty: Medium
// https://leetcode.com/problems/equal-sum-grid-partition-i/

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long int total =0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                total+=grid[i][j];
            }
        }
        if(total % 2 != 0){
            return false;
        }

        long long int row =0; 
        for(int i =0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                row+=grid[i][j];
            }
            if(row == total - row){
                return true;
            }
        }

        int long long col =0;
        for(int j=0; j<grid[0].size(); j++){
            for(int i=0; i<grid.size(); i++){
                col+=grid[i][j];
            }
            if(col == total - col){
                return true;
            }
        }

        return false;
    }
};