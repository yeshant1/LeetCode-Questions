//leetcode - 1470
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a ;
        vector<int> b;
        vector<int> result;

        for(int i = 0;i<n;i++){
            a.push_back(nums[i]);
        }

         for(int i = n;i<nums.size();i++){
            b.push_back(nums[i]);
         }
          for(int i = 0;i<n;i++){
            result.push_back(a[i]);
            result.push_back(b[i]);
  
          }
  return result;
    }
};
