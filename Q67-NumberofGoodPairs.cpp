//leetcode 1512
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;

        for(int i=0;i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    count = count + 1;
                }
            }
        }
        return count;
        
    }
};
