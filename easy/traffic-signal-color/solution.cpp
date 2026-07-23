// Traffic Signal Color
// Difficulty: Easy
// https://leetcode.com/problems/traffic-signal-color/

class Solution {
public:
    string trafficSignal(int timer) {
        if(timer==0){
            return "Green";
        }
        if(timer==30) return "Orange";

        if(timer > 30 && timer <= 90) return "Red"; 
        return "Invalid";
    }
};