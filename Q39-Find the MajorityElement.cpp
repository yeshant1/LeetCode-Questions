//leetcode-169
class Solution {
public:
   int majorityElement(vector<int> v) {
    int n = v.size();

    for(int i = 0;i<n;i++){
        int cnt = 0;
        for(int j = 0;j<n;j++){
            if(v[j] == v[i]){
                cnt++;
            }
        }

        if(cnt > n/2){
            return v[i];
        }
    }
    return -1;
   }
};
