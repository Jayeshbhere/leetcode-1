/* 2490. Circular Sentence
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

For example, "Hello World", "HELLO", "hello world hello world" are all sentences.
Words consist of only uppercase and lowercase English letters. Uppercase and lowercase English letters are considered different.

A sentence is circular if:

The last character of a word is equal to the first character of the next word.
The last character of the last word is equal to the first character of the first word.
For example, "leetcode exercises sound delightful", "eetcode", "leetcode eats soul" are all circular sentences. However, "Leetcode is cool", "happy Leetcode", "Leetcode" and "I like Leetcode" are not circular sentences.

Given a string sentence, return true if it is circular. Otherwise, return false.
*/


class Solution {
public:
    bool isCircularSentence(string sentence) {
        string start;
        string end;
        int n=sentence.length();
        for(int i=0;i<n;i++){
            if(sentence[i]==' '){
                start.push_back(sentence[i+1]);
                end.push_back(sentence[i-1]);
            }
            start.push_back(sentence[0]);
            end.push_back(sentence[n-1]);
        }
        if(start==end){
            return true;
        }
        return false;
    }
};