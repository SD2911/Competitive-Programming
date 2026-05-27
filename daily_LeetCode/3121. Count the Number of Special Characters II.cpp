You are given a string word. A letter c is called special if it appears both in lowercase and
uppercase in word, and every lowercase occurrence of c appears before the first uppercase
occurrence of c.
Return the number of special letters in word.
Example 1:
Input: word = "aaAbcBC"
Output: 3
Explanation:
The special characters are 'a', 'b', and 'c'.

Example 2:
Input: word = "abc"
Output: 0
Explanation: There are no special characters in word.

Example 3:
Input: word = "AbBCab"
Output: 0
Explanation:  There are no special characters in word.

Constraints:  1 <= word.length <= 2 * 105
word consists of only lowercase and uppercase English letters.


code:
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt = 0;
        int n = word.size();

        for (char c = 'a'; c <= 'z'; c++) {
            int lastSmall = -1, firstCap = INT_MAX;

            for (int i = 0; i < n; i++)
                if (word[i] == c) lastSmall = i;

            for (int i = 0; i < n; i++)
                if (word[i] == c - 32) { firstCap = i; break; }

            if (lastSmall != -1 && firstCap != INT_MAX && lastSmall < firstCap)
                cnt++;
        }
        return cnt;
    }
};
