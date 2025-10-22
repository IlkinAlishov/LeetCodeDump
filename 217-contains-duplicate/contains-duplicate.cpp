#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> isDouble;
        for(int i = 0; i < nums.size(); i++){
            int t = nums[i];
            if(isDouble.find(nums[i]) != isDouble.end()){
                return true;
            }
            else{
                isDouble.insert(nums[i]);
            }
        }

        return false;
    }
};