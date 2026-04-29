#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> occurrences;
        for(int i = 0; i<nums.size(); i++){
            occurrences[nums.at(i)]++;
            if(occurrences[nums.at(i)] > 1) return true;
        }
        return false;
    }
};