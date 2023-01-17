/* 2500. Delete Greatest Value in Each Row
You are given an m x n matrix grid consisting of positive integers.

Perform the following operation until grid becomes empty:

Delete the element with the greatest value from each row. If multiple such elements exist, delete any of them.
Add the maximum of deleted elements to the answer.
Note that the number of columns decreases by one after each operation.

Return the answer after performing the operations described above.
*/

//dumbass solution by me which is not working(now it is working.....hushhhh)
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int answer=0;
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i=0;i<grid[0].size();i++){
            int maxi=0;
            for(int j=0;j<grid.size();j++){
                maxi=max(grid[j][i],maxi);
            }
            answer+=maxi;
        }
        return answer;
    }
};

//official solution
class Solution 
{
public:
    int deleteGreatestValue(vector<vector<int>>& grid) 
    {
        int sum = 0;
        
        for (auto& row : grid) sort(row.begin(), row.end());
        
        for (int j = 0; j < grid[0].size(); ++j)
        {
            int n = 0;
            for (int i = 0; i < grid.size(); ++i)
                n = max(n, grid[i][j]);
            sum += n;
        }
        
        return sum;
    }
};