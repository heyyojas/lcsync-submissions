// Two Furthest Houses With Different Colors
// Difficulty: Easy
// https://leetcode.com/problems/two-furthest-houses-with-different-colors/

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int max1 = 0;
        for(int i=0; i<n; i++){
            if(colors[i]!=colors[n-1]){
                max1=max(max1, n-i-1);
                break;
            }
        }

        for(int j=n-1; j>=0;j--){
            if(colors[j]!=colors[0]){
                max1=max(max1,j);
                break;
            }
        }

        return max1;
    }
};