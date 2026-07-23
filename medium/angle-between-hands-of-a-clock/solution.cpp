// Angle Between Hands of a Clock
// Difficulty: Medium
// https://leetcode.com/problems/angle-between-hands-of-a-clock/

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double min_angle = minutes*6;
        double hour_angle = (hour%12)*30 + minutes *0.5;

        double diff = abs(hour_angle - min_angle);
        
        return min(diff, 360 - diff);
    }
};