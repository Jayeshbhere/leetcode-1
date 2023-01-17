/* 2363. Merge Similar Items
You are given two 2D integer arrays, items1 and items2, representing two sets of items. Each array items has the following properties:

items[i] = [valuei, weighti] where valuei represents the value and weighti represents the weight of the ith item.
The value of each item in items is unique.
Return a 2D integer array ret where ret[i] = [valuei, weighti], with weighti being the sum of weights of all items with value valuei.

Note: ret should be returned in ascending order by value.
*/


class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        sort(items1.begin(), items1.end());
        sort(items2.begin(), items2.end());
        vector<vector<int>>ans;
        int i=0 , j=0; 
        int k=0;
        while(i<items1.size() && j<items2.size()){
            if(items1[i][0]==items2[j][0]){
                ans.push_back(items1[i]);
                ans[k][1]+=items2[j][1];
                i++;
                k++;
                j++;
            }
            else if(items1[i][0]<items2[j][0]){
                ans.push_back(items1[i]);
                i++;
                k++;
            }
            else{
                ans.push_back(items2[j]);
                j++;
                k++;
            }
        }
        while(i<items1.size()){
            ans.push_back(items1[i]);
            i++;
        }
        while(j<items2.size()){
            ans.push_back(items2[j]);
            j++;
        }
        return ans;
    }
};