/* 2396. Strictly Palindromic Number
An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), the string representation of the integer n in base b is palindromic.

Given an integer n, return true if n is strictly palindromic and false otherwise.

A string is palindromic if it reads the same forward and backward.
*/


class Solution {
public:
    bool isStringPalindrome(int n,int k){
        vector<int> arr;
        while(n>=1){
            arr.push_back(n%k);
            n/=k;
        }
        int i=0,j=arr.size()-1;
        while(i<=j){
            if(arr[i++]==arr[j--]){
            }
            else{
                return false;
            }
        }
        return true;
        
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<n-1;){
            if(isStringPalindrome(n,i)){
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};