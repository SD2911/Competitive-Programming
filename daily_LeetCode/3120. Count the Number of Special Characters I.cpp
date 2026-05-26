You are given a string word. A letter is called special if it appears both in lowercase and
uppercase in word.
Return the number of special letters in word.
Example 1:
Input: word = "aaAbcBC"
Output: 3
Explanation:   The special characters in word are 'a', 'b', and 'c'.
Example 2:
Input: word = "abc"
Output: 0
Explanation:   No character in word appears in uppercase.
Example 3:
Input: word = "abBCab"
Output: 1
Explanation:   The only special character in word is 'b'.
Constraints:

1 <= word.length <= 50
word consists of only lowercase and uppercase English letters.



code:
class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> l,u;
        for(char c : word){
            if(islower(c)) l.insert(c);
            else u.insert(tolower(c));
        }

        int cnt = 0;
        for(char c : l){
            if(u.count(c)) cnt++;
        }
           return cnt;
    }
};
