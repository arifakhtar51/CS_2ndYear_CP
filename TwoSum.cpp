#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_index;

        for (int i = 0; i < nums.size(); ++i) {
            int cur = nums[i]; 
            int x = target - cur; 


            if (num_to_index.find(x) != num_to_index.end()) {
                
                return {num_to_index[x], i};
            }
            num_to_index[cur] = i;
        }

       
        return {};
    }
};
