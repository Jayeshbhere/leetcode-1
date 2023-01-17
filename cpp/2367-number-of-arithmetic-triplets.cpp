/* 2367. Number of Arithmetic Triplets
You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following conditions are met:

i < j < k,
nums[j] - nums[i] == diff, and
nums[k] - nums[j] == diff.
Return the number of unique arithmetic triplets.
*/


class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int i = 0, j = i+1, k = j+1, cnt = 0;
        
        while(k < nums.size()){
            
            if(nums[k] - nums[j] == diff){
                if(nums[j] - nums[i] == diff){
                    cnt++;
                    i++; j++; k++;
                }
                else if(nums[j] - nums[i] > diff){
                    if(i+1<j){
                        i++;
                    }
                    else{
                        j++; i++;
                    }
                }
                else{
                    if(j+1<k){
                        j++;
                    }
                    else{
                        k++; j++;
                    }
                }
            }
            
            else if(nums[k] - nums[j] < diff){
                k++;
            }
            
            else{
                if(j+1<k){
                    j++;
                }
                else{
                    k++; j++;
                }
            }
        }
        
        return cnt;
        
    }
};