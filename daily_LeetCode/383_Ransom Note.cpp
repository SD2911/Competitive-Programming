Given two strings ransomNote and magazine, return true if ransomNote can be constructed by
using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.
Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true
 
Constraints:1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.



☠️idea:
  Store frequency of each character from magazine
While traversing ransomNote, consume characters
If any character becomes negative → not enough copies available


code:
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;

        for(char c:magazine) mp[c]++;

        for(char c:ransomNote) {
            mp[c]--;
            if(mp[c]<0) return false;
        }
          return true;
    }
};
