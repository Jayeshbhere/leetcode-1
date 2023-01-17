/* 2446. Determine if Two Events Have Conflict
You are given two arrays of strings that represent two inclusive events that happened on the same day, event1 and event2, where:

event1 = [startTime1, endTime1] and
event2 = [startTime2, endTime2].
Event times are valid 24 hours format in the form of HH:MM.

A conflict happens when two events have some non-empty intersection (i.e., some moment is common to both events).

Return true if there is a conflict between two events. Otherwise, return false.
*/


class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        bool ans=true;
        string end1=event1[1];
        string end2=event2[1];
        string start1=event1[0];
        string start2=event2[0];
        start1.erase(start1.begin()+2);
        end1.erase(end1.begin()+2);
        start2.erase(start2.begin()+2);
        end2.erase(end2.begin()+2);
        int num1=stoi(start1);
        int num2=stoi(start2);
        int num3=stoi(end1);
        int num4=stoi(end2);
        if(num1>num2 && num1>num4){
            ans=false;
        }
        else if(num2>num1 && num2>num3){
            ans=false;
        }
        return ans;
    }
};