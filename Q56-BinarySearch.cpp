//leetcode - 704

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size() - 1;

        int start = 0;
        int end = n - 1;

        while(start <= end){
            int mid = (start + end ) / 2;

            if(target > nums[mid]) start = mid + 1;
            else if(target == nums[mid]) return mid;
            else end = mid - 1;
        }
        return -1;
        
    }
};
