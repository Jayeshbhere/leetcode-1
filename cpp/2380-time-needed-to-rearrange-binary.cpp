/* 2380. Time Needed to Rearrange a Binary String
You are given a binary string s. In one second, all occurrences of "01" are simultaneously replaced with "10". This process repeats until no occurrences of "01" exist.

Return the number of seconds needed to complete this process.
*/


class Solution {
public:
    void solve(string& s, int* cnt){
        string target_str = "01";
        
        size_t found = s.find(target_str);
        //base case
        if(found != string::npos){
            int n = s.length();
        
            for(int i = 0; i < n-1; i++){
                if(s[i] == '0' && s[i+1] == '1'){
                    swap(s[i], s[i+1]);
                    i++;
                }
            }
            *cnt = *cnt + 1;
            solve(s, cnt);
        }
        else{
            return ;
        }
        
        return ;
    }
    
    int secondsToRemoveOccurrences(string s) {
        int cnt = 0;
        
        solve(s, &cnt);
        
        return cnt;
    }
};