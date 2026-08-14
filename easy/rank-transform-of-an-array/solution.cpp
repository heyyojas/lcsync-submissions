// Rank Transform of an Array
// Difficulty: Easy
// https://leetcode.com/problems/rank-transform-of-an-array/

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;

        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> rank;

        int r = 1;

        for(int x : sorted){
            if(rank.find(x) == rank.end()){
                rank[x] = r;
                r++;
            }
        }
        for(int i=0; i<arr.size(); i++){
            arr[i] = rank[arr[i]];
        }

        return arr;
    }
};