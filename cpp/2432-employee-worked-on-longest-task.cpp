/* 2432. The Employee That Worked on the Longest Task
There are n employees, each with a unique id from 0 to n - 1.

You are given a 2D integer array logs where logs[i] = [idi, leaveTimei] where:

idi is the id of the employee that worked on the ith task, and
leaveTimei is the time at which the employee finished the ith task. All the values leaveTimei are unique.
Note that the ith task starts the moment right after the (i - 1)th task ends, and the 0th task starts at time 0.

Return the id of the employee that worked the task with the longest time. If there is a tie between two or more employees, return the smallest id among them.
*/


class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int size=logs.size();
        vector<int> diff;
        diff.push_back(logs[0][1]);
        for(int i=1;i<size;i++){
            diff.push_back(logs[i][1]-logs[i-1][1]);
        }
        int maxWorkHour=diff[0];
        int index=logs[0][0];
        for(int i=1;i<size;i++){
            if(maxWorkHour<diff[i]){
                maxWorkHour=diff[i];
                index=logs[i][0];
            }
            else if(maxWorkHour==diff[i] && logs[i][0]<index){
                index=logs[i][0];
            }
        }
        return index;
    }
};