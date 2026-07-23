// Minimum Initial Energy to Finish Tasks
// Difficulty: Hard
// https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/

class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        vector<pair<int, int>> new_tasks;

        for(const auto& task : tasks){
            int actual = task[0];
            int minimum = task[1];
            int buffer = minimum - actual;

            new_tasks.push_back({buffer, actual});
        }

        sort(new_tasks.rbegin(), new_tasks.rend());

        int min_energy = 0;
        int current_energy = 0;

        for(const  auto& taskPair : new_tasks ){
            int buffer = taskPair.first;
            int actual = taskPair.second;

            int minimum = buffer + actual;

            if(current_energy < minimum){
                int deficit = minimum - current_energy;
                min_energy += deficit;
                current_energy += deficit;
            }
            current_energy -= actual;
        }
        return min_energy;
    }
};