/* 2491. Divide Players Into Teams of Equal Skill
You are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player. Divide the players into n / 2 teams of size 2 such that the total skill of each team is equal.

The chemistry of a team is equal to the product of the skills of the players on that team.

Return the sum of the chemistry of all the teams, or return -1 if there is no way to divide the players into teams such that the total skill of each team is equal.
*/


class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long maxi=0;
        int start=0;
        int end=skill.size()-1;
        long sum=skill[start]+skill[end];
        while(start<=end){
            long currsum=skill[start]+skill[end];
            if(sum!=currsum){
                return -1;
                }
            maxi=maxi+(skill[start]*skill[end]);
            start++;
            end--;
        }
        return maxi;
    }
};