// Toggle Light Bulbs
// Difficulty: Easy
// https://leetcode.com/problems/toggle-light-bulbs/

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        int result[101] = {0};

        for(int x : bulbs){
            result[x] = 1 - result[x];
        }
        vector<int> arr;
        for(int i=1; i<=100; i++){
            if(result[i] == 1){
                arr.push_back(i);
            }
        }
        return arr;
    }
};