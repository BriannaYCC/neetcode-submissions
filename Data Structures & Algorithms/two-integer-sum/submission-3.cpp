class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> answerVec; 
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    answerVec.push_back(i);
                    answerVec.push_back(j);
                    return answerVec;
                };
            }
        }
    }
};
