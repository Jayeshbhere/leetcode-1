/* 2248. Intersection of Multiple Arrays
Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order.
*/


class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        map<int, int> f;
        for (int i = 0; i < n; i++)
            for (auto& j : nums[i])
                f[j]++;
        vector<int> ans;
        for (auto& p : f)
            if (p.second == n)
                ans.push_back(p.first);
        return ans;
    }
};