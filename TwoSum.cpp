
// Need to look back at this later 11/23/26
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()<2) return {};
        
        std::vector<int> ReturnIt{};
        std::unordered_map<int,int> AlreadyMapped{};

        for(int i {0}; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            if (AlreadyMapped.find(complement) != AlreadyMapped.end())
            {
                ReturnIt.push_back(AlreadyMapped[complement]);
                ReturnIt.push_back(i);
                return ReturnIt;
            }
            else
            {
                AlreadyMapped[nums[i]] = i;
            }
        }

        return ReturnIt;
    }
};
