class Solution {
 public:
  bool canConstruct(string ransomNote, string magazine) {
    int frequency[26] = {0};
    for (int i=0; i<magazine.size(); ++i) {
        frequency[magazine[i]-'a']++;
    }
    for (int i=0; i<ransomNote.size(); ++i) {
        if (--frequency[ransomNote[i]-'a'] < 0) return false;
    }
    return true;
  }
};

/*
 ? Alternative solution with unordered map, slower!
class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> frequency;
        for (auto character : magazine) {
          frequency[character]++;
        }
        for (auto character : ransomNote) {
          if (--frequency[character] < 0) return false;
        }
        return true;
    }
};
*/
