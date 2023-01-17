/* 2496. Maximum Value of a String in an Array
The value of an alphanumeric string can be defined as:

The numeric representation of the string in base 10, if it comprises of digits only.
The length of the string, otherwise.
Given an array strs of alphanumeric strings, return the maximum value of any string in strs.
*/



class Solution {
public:
    
    bool ischar(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ( s[i]>='a'  && s[i]<='z')
            {
                return true;
            }
        }
        return false;
    }
    
int stringTointeger(string str){
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}
    
    int maximumValue(vector<string>& strs) {
        vector<int>ans;
        for(int i=0 ; i<strs.size() ; i++){
            if(ischar(strs[i])==1){
                ans.push_back(strs[i].length());
            }
            else{
                ans.push_back(stringTointeger(strs[i]));
            }
        }
        return *max_element(ans.begin(),ans.end());
        
    }
};