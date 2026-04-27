#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        std::unordered_map<char, int> occurrences_S;
        std::unordered_map<char, int> occurrences_T;
        
        for(int i = 0; i < s.length(); i++){
            occurrences_S[s[i]]++;
            occurrences_T[t[i]]++;
        }

        return occurrences_S == occurrences_T;
    }
};
