//leetcode-2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp; // Stores potential indices
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                   // temp.clear(); // Clear temp before adding new indices
                    temp.push_back(i);
                    temp.push_back(j);
                    return temp; // Return temp only if a match is found
                }
            }
        }
        return {}; // No match found
    }
};
