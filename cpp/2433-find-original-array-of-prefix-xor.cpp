/* 2433. Find The Original Array of Prefix Xor
You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:

pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].
Note that ^ denotes the bitwise-xor operation.

It can be proven that the answer is unique.
*/


class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ogArray;
        int size=pref.size();
        ogArray.push_back(pref[0]);
        for(int i=1;i<size;i++){
            int curr=pref[i]^pref[i-1];
            ogArray.push_back(curr);
        }
        return ogArray;
    }
};