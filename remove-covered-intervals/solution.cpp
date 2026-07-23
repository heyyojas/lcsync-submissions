// Remove Covered Intervals
// https://leetcode.com/problems/remove-covered-intervals/

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            if(a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });

        int count = 0;
        int max = -1;

        for(auto &it : intervals){
            if(it[1] > max){
                count++;
                max = it[1];
            }
        }
        return count;
    }
};