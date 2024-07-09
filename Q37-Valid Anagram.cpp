//leetcode - 242
class Solution {
public:
    bool isAnagram(string s, string t) {
        //Case1 - Check both the string have same length or not
        if(s.length() != t.length()) {
             return false;
        }

        //Case2 - make an array of 26 size and count the frequencies and compare
        int freq[26] = {0};

        for(int i = 0;i<s.length();i++){
            freq[s[i] - 'a']++;
        }

        for(int i = 0;i<t.length();i++){
            freq[t[i] - 'a']--;
        }

        for(int i = 0;i<26;i++){
            if(freq[i] != 0){
                return false;
            }
        }
          
         return true;
    }
};
