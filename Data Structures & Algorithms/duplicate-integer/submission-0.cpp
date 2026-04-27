#include <unordered_map>
#include <string>
#include <vector>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> occurrences;
        for(auto num : nums){
            occurrences[num] = occurrences[num] + 1;
        }
        for(auto num : occurrences){
            if(num.second > 1){
                return true;
            }
        }
        return false;
    }
};