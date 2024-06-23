class Solution {
public:
    bool isPalindrome(int x) {
        // Special cases:
        // 1. If x is negative, it cannot be a palindrome
        // 2. If x ends with 0 (except when x is 0 itself), it cannot be a palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int reverse = 0;
        int original = x; // Store original x
        
        while (x != 0) {
            int remainder = x % 10;
            // Check for integer overflow before updating reverse
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && remainder > 7)) {
                return false; // Overflow will occur, not a palindrome
            }
            reverse = reverse * 10 + remainder;
            x /= 10;
        }
        
        // After reversing, compare with original x
        return reverse == original;
    }
};
